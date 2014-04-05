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



struct attr
{
	enum type_enum my_type;
	char var_name[50][100];	
	int index;
	int dimension[50];
	vector <int> x;
	
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

struct llm {
        enum type_enum my_type;
        int dimension;
};
union Data {
        int index;
        map<string, struct llm>::iterator it;
};
struct symbol_table {
        vector <struct symbol_table *> children;
        struct symbol_table *parent;
        map <string, struct llm> table;
        symbol_table() {}
};

