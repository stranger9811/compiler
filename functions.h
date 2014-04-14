#include <vector>
#include "resources.h"

extern vector<code_element> global_code;

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
