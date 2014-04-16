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

	/*void gencallercode (bool calling, funcparams paramlist,lim) // caller saved registers: t0 through t7
	{
		if (calling)
		{
			/*for (int i = 0; i < 4; ++i)
			{
				loadreg("$a"+to_string(i),);
			}*//*
			for (int i=0;i<8;i++)
			{
				loadreg("$t"+to_string(i),lim);
				lim -= 4;
			}
			
		}

		else
		{

		}
	}*/

};
