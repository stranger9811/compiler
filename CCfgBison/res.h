#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <stdlib.h>
#include <cstdio>
#include <iostream>

using namespace std;
extern int no_line;
#define MAXPARAM 50
#define STACKSIZE 512
extern FILE *text;
extern map <int,int> label_info;
extern struct symbol_table *current_symbol_table;

enum type_enum{
Bool,
Long_long,
Char,
Int, 
Float, 
Double,
Void,
Pointer,
Useless,
Error

};
enum type_instr{
Jump,
Assignment,
Mipscode
};


struct args {
	string var;
	int temp;
	int int_val;
	float float_val;
	int args_type;		// can be from 1 to 4
	string getreg()
	{
		if (args_type == 1) return var;
		if (args_type == 2) return "$r"+ to_string(int_val);
	}
};

struct funcparams {
	args my_args[MAXPARAM];
	enum type_enum my_type[MAXPARAM];
	int dimension[MAXPARAM];
	int total;
};

struct lexemeNparam {
	funcparams my_params;
	string lexeme;
};

struct llm {
        enum type_enum my_type;
        int dimension;
        int array_size;
        funcparams paramlist;
        int funcline;
};


struct code_element {
	enum type_instr data1; 	//Type of the instruction. If the instruction is Mipscode then we have
							// the mips statement in the order data2 arg1.var arg2.var result.var
	string data2;    //Lexeme of the operator
	struct args arg1;	//1st operand
	struct args arg2; 	//2nd operand
	struct args result; 	//Final result if data1 = Assignment, target of Jump if data1 = Jump.

	code_element()
	{
		data1 = Assignment;
		data2 = "";
	}
};

extern vector<code_element> global_code;

struct attr
{
	enum type_enum my_type;
	bool isreturn;
	struct args place;
	
	int array_size[50];

	vector <code_element> code;
	char var_name[50][100];	
	int index;
	vector <int> truelist;
	vector <int> falselist;
	vector <int> nextlist;
	int dimension[50];
	attr() {isreturn = 0;}
};


struct symbol_table {
        vector <struct symbol_table *> children;
        struct symbol_table *parent;
        int scope_number;
        map <string, struct llm> table;
        symbol_table() {}
};

struct compiler {

	string enumtostring(enum type_enum type)
	{

	        if(type==Bool) return "bool";
	        if(type==Long_long) return "long long";
	        if(type==Char) return "char";
	        if(type==Int) return "int";
	        if(Float==type) return "float";
	        if(Double==type) return "double";
	        if(Void==type) return "void";
	        if(Pointer==type) return "Pointer";
	}

	int width(enum type_enum type)  //Size of the type in bytes
	{
		if (type == Int) return 4;
		if (type == Bool) return 1;
		if (type == Float) return 4;
		if (type == Double) return 8;
		if (type == Pointer) return 8;
		if (type == Long_long) return 8;
	}

	void backpatch(vector <int> lines, int label) {
		int i;

		for (i=0;i<lines.size();i++)
		{
			global_code[lines[i]].result.int_val = label;
		}
	}

	vector <int> makelist(int p) {
		vector <int> new1;
		new1.push_back(p);
		return new1;
	}
	int get_scope(string var_name_t) {
		#ifdef debug2
		cout << "int get_scope" << " " << var_name_t << endl;
		#endif
		struct symbol_table *temp = current_symbol_table;
		while(temp!=NULL && temp->table.find(var_name_t)==temp->table.end()) {
			cout << "scope is " << temp->scope_number << endl;
			temp = temp->parent;
		}
		if(temp->table.find(var_name_t)!=temp->table.end())
			return temp->scope_number;
		return -1;
	}
	vector <int> merge_list(vector <int> l1,vector <int> l2) {
		
		for(int i=0; i<l1.size(); i++) {
			l2.push_back(l1[i]);
		}
		return l2;
	 }

	 void writemipscode (string a, string b, string c="", string d="")
	 {
	 		code_element setsp;
			setsp.data1 = Mipscode;

			setsp.data2 = a;
			setsp.arg1.var = b;
			setsp.arg1.args_type = 1;
			setsp.arg2.var = c;
			setsp.arg2.args_type = 1;
			setsp.result.var = d;
			setsp.result.args_type = 1;

			global_code.push_back(setsp);
	 }
	 void savereg (string reg, int where)
	 {
	 	writemipscode ("sw",reg,to_string(where) + "($sp)");
	 }
	 void loadreg (string reg, int where)
	 {
	 	writemipscode ("lw",reg,to_string(where)+"($sp)");
	 }

	void gencalleecode (bool justcalled) //callee saved register: s0 through s7
	{
		if (justcalled)
		{
			writemipscode ("subu","$sp","$sp",to_string(STACKSIZE));
			int lim = STACKSIZE;
			lim -= 4;
			savereg("$ra",lim);
			lim -= 4;
			savereg ("$fp",lim);
			writemipscode ("addu","$fp","$sp,",to_string(STACKSIZE));
			for (int i=0;i<8;i++)
			{
				lim -= 4;
				savereg("$s"+to_string(i),lim);
			}
		}
		else
		{
			int lim = STACKSIZE-4;
			loadreg("$ra",lim);
			lim -= 4;
			loadreg("$fp",lim);
			lim -= 4;
			writemipscode ("$sp", "$sp",to_string(STACKSIZE));
			for (int i=0;i<8;i++)
			{
				loadreg("$s"+to_string(i),lim);
				lim -= 4;
			}

			//after this, if it is a function call you need to do jr $ra
		}
	}

	
	string get_addr(string s)
	{ 
	
	  int place=STACKSIZE;
	 place=place-4;
	 if(!s.compare("$0")||!s.compare("$zero"))
		return ( to_string(place)+"($sp)");
		place=place-4;
	 if(!s.compare("$1")||!s.compare("$at")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$2")||!s.compare("$v0")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$3")||!s.compare("$v1")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$4")||!s.compare("$a0")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$5")||!s.compare("$a1")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$6")||!s.compare("$a2")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$7")||!s.compare("$a3")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$8")||!s.compare("$t0")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$9")||!s.compare("$t1")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$10")||!s.compare("$t2")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$11")||!s.compare("$t3")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$12")||!s.compare("$t4")) 
		return ( to_string(place)+"($sp)");
		place=place-4;
	if(!s.compare("$13")||!s.compare("$t5")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$14")||!s.compare("$t6")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$15")||!s.compare("$t7")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$16")||!s.compare("$s0")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$17")||!s.compare("$s1")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$18")||!s.compare("$s2")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$19")||!s.compare("$s3")) 
		return ( to_string(place)+"($sp)");
		place=place-4;	
	if(!s.compare("$20")||!s.compare("$s4")) 
		return ( to_string(place)+"($sp)");
		place=place-4;			
	if(!s.compare("$21")||!s.compare("$s5")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$22")||!s.compare("$s6")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$23")||!s.compare("$s7")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$24")||!s.compare("$t8")) 
		return ( to_string(place)+"($sp)");
		place=place-4;		
	if(!s.compare("$25")||!s.compare("$t9")) 
		return ( to_string(place)+"($sp)");
		place=place-4;			
	if(!s.compare("$26")||!s.compare("$k0")) 
		return ( to_string(place)+"($sp)");
		place=place-4;	
	if(!s.compare("$27")||!s.compare("$k1")) 
		return ( to_string(place)+"($sp)");
		place=place-4;			
	if(!s.compare("$28")||!s.compare("$gp")) 
		return ( to_string(place)+"($sp)");
		place=place-4;			
	if(!s.compare("$29")||!s.compare("$sp")) 
		return ( to_string(place)+"($sp)");
		place=place-4;			
	if(!s.compare("$30")||!s.compare("$fp")) 
		return ( to_string(place)+"($sp)");
		place=place-4;			
	if(!s.compare("$31")||!s.compare("$ra")) 
		return ( to_string(place)+"($sp)");
		place=place-4;	
	}
	void gencallercode (bool calling, funcparams paramlist, int lim) // caller saved registers: t0 through t7
	{
		
		if (calling)
		{

			for (int i = 0; i < 4; ++i)
			{
				if (paramlist.my_args[i].args_type== 2)
					writemipscode("mv", "$a"+to_string(i),",$"+to_string(paramlist.my_args[i].temp));
				else if (paramlist.my_args[i].args_type== 1)
				{
					string temp = paramlist.my_args[i].var;
					int scope = get_scope(temp);
					writemipscode("lw", "$a"+to_string(i),","+temp+"_"+to_string(scope) );
				}

			}
			for (int i=0;i<8;i++)
			{
				loadreg("$t"+to_string(i),lim);
				lim -= 4;
			}
			
		}

		else //Callee has returned from call
		{
			for 
		}
	}

};
