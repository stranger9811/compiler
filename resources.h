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


struct llm {
        enum type_enum my_type;
        int dimension;
};
union Data {
	map<string ,struct llm>::iterator it;
	int index;
};
struct code_element  {
	union Data first;
	union Data second;
	string op;
	union Data third;
	bool first_type;
	bool second_type;
	bool third_type; 		// 0 means we are using temp variables. 1 means we are using pointer to symbol table
};
struct attr
{
	enum type_enum my_type;
	union Data place;
	bool place_type;
	char var_name[50][100];	
	int index;
	int dimension[50];
	
	
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

