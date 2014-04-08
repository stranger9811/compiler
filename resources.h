#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <stdlib.h>
#include <cstdio>

using namespace std;
extern int no_line;

enum type_enum{
Bool,
Long_long,
Char,
Int, 
Float, 
Double,
Void,
Pointer

};
enum type_instr{
Jump,
Assignment
};

struct llm {
        enum type_enum my_type;
        int dimension;
};

struct args {
	string var;
	int temp;
	int int_val;
	float float_val;
	int args_type;
};
struct code_element {
	enum type_instr data1;
	string data2;
	struct args arg1;
	struct args arg2;
	struct args result; 
};
struct attr
{
	enum type_enum my_type;
	struct args place;
	
	vector <code_element> code;
	char var_name[50][100];	
	int index;
	vector <int> truelist;
	vector <int> falselist;
	int dimension[50];
	attr() {}
};

/*
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
*/

struct symbol_table {
        vector <struct symbol_table *> children;
        struct symbol_table *parent;
        map <string, struct llm> table;
        symbol_table() {}
};

