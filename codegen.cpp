#include<vector>
#include <algorithm>
#include<utility>
#include "resources.h"
using namespace std;
extern int main_function_line ;

void codegen() 
{
	printf("=======mips code==== %lu\n",global_code.size());

	int is_leader[global_code.size()+1];   // +1 for end of program
	memset(is_leader,0,sizeof(is_leader));
	is_leader[0] = 1;
	is_leader[global_code.size()]=1;
	for(int i=1; i<global_code.size(); i++) {
		if(global_code[i].data1==Jump) {
			if(global_code[i].data2=="") {
				is_leader[global_code[i].result.int_val] = 1;
			}
			else {
				is_leader[global_code[i].result.int_val] = 1;
			}
		}
	}					
	int start = 0,end =0;
	for(int i=1; i<=global_code.size(); i++) {
		while(!is_leader[i])
			i++;
		end = i-1;
		cout <<  "block " << start  << " " << end << endl;
		vector <pair<int,int> > live;
		vector <int> dead;
		for(int i=1;i<=28;i++) 
			dead.push_back(i);
		for(int j=end; j>=start; j--) {
			if(global_code[j].data1==Jump){

				if(global_code[j].arg1.args_type == 2 && global_code[j].arg1.temp > -1){
					int flag = 1;
					for(int k=0; k<live.size();k++) {
						if(live[k].first==global_code[j].arg1.temp) {
							flag = 0; 
							global_code[j].arg1.temp = live[k].second;
						}
					}
					if(flag==1) {

						live.push_back(make_pair(global_code[j].arg1.temp,dead[0]));
						global_code[j].arg1.temp = dead[0];
						dead.erase(dead.begin());
					}
				}
				if(global_code[j].arg2.args_type == 2 && global_code[j].arg2.temp > -1){
					int flag = 1;
					for(int k=0; k<live.size();k++) {
						if(live[k].first==global_code[j].arg2.temp) {
							flag = 0; 
							global_code[j].arg2.temp = live[k].second;
						}
					}
					if(flag==1) {
						live.push_back(make_pair(global_code[j].arg2.temp,dead[0]));
						global_code[j].arg2.temp = dead[0];
						dead.erase(dead.begin());
					}
				}
			}
			else if(global_code[j].data1==Array) {
				if(global_code[j].result.args_type==2 && global_code[j].result.temp > -1) {
					int flag = 1;
					for(int k=0; k<live.size();k++) {
						if(live[k].first==global_code[j].result.temp) {
							flag = 0;
							global_code[j].result.temp = live[k].second;
							dead.push_back(live[k].second);
							live.erase(live.begin()+k);
							sort(dead.begin(),dead.end());
						}
					}
					
				}
				if(global_code[j].arg1.args_type == 2 && global_code[j].arg1.temp > -1){
					int flag = 1;
					for(int k=0; k<live.size();k++) {
						if(live[k].first==global_code[j].arg1.temp) {
							flag = 0; 
							global_code[j].arg1.temp = live[k].second;
						}
					}

					if(flag==1) {

						live.push_back(make_pair(global_code[j].arg1.temp,dead[0]));
						global_code[j].arg1.temp = dead[0];
						dead.erase(dead.begin());
					}
				}
				if(global_code[j].arg2.args_type == 2 && global_code[j].arg2.temp > -1){
					int flag = 1;
					for(int k=0; k<live.size();k++) {
						if(live[k].first==global_code[j].arg2.temp) {
							flag = 0; 
							global_code[j].arg2.temp = live[k].second;
						}
					}
					if(flag==1) {
						live.push_back(make_pair(global_code[j].arg2.temp,dead[0]));
						global_code[j].arg2.temp = dead[0];
						dead.erase(dead.begin());
					}
				}
			}
			else if(global_code[j].data1==Assignment) {

				if(global_code[j].result.args_type==2 && global_code[j].result.temp > -1) {
					int flag = 1;
					for(int k=0; k<live.size();k++) {
						if(live[k].first==global_code[j].result.temp) {
							flag = 0;
							global_code[j].result.temp = live[k].second;
							dead.push_back(live[k].second);
							live.erase(live.begin()+k);
							sort(dead.begin(),dead.end());
						}
					}
					
				}

				if(global_code[j].arg1.args_type == 2 && global_code[j].arg1.temp > -1){
					int flag = 1;
					for(int k=0; k<live.size();k++) {
						if(live[k].first==global_code[j].arg1.temp) {
							flag = 0; 
							global_code[j].arg1.temp = live[k].second;
						}
					}

					if(flag==1) {

						live.push_back(make_pair(global_code[j].arg1.temp,dead[0]));
						global_code[j].arg1.temp = dead[0];
						dead.erase(dead.begin());
					}
				}
				if(global_code[j].arg2.args_type == 2 && global_code[j].arg2.temp > -1){
					int flag = 1;
					for(int k=0; k<live.size();k++) {
						if(live[k].first==global_code[j].arg2.temp) {
							flag = 0; 
							global_code[j].arg2.temp = live[k].second;
						}
					}
					if(flag==1) {
						live.push_back(make_pair(global_code[j].arg2.temp,dead[0]));
						global_code[j].arg2.temp = dead[0];
						dead.erase(dead.begin());
					}
				}
			}
		}
		start = i;
	}
}

int check_operator(int i)
{
	if (global_code[i].data2 == "+")
	{
		fprintf(text,"\tadd $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "-")
	{
		fprintf(text,"\tsub $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "/")
	{
		fprintf(text,"\tdiv $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "*")
	{	
		fprintf(text,"\tmul $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "MOD")
	{
		fprintf(text,"\trem $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	return 0;
}
void create_jump(int i)
{
	if(global_code[i].data2.empty()) {
		fprintf(text, "\tb L%d\n",global_code[i].result.int_val);
		//printf("simple jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2=="==") {
		fprintf(text, "\tbeq $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2==">=") {
		fprintf(text, "\tbge $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2=="<=") {
		fprintf(text, "\tble $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2==">") {
		fprintf(text, "\tbgt $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2=="<") {
		fprintf(text, "\tblt $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2=="!=") {
		fprintf(text, "\tbne $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
}
int generate_result(int num) {
	if(num <0)
		return -num;
	else
		return num+8;
}
void create_mips()
{

	text =  fopen("mips_code.s","a");


	int is_leader[global_code.size()+1];   // +1 for end of program
	memset(is_leader,0,sizeof(is_leader));
	is_leader[0] = 1;
	is_leader[global_code.size()]=1;
	for(int i=1; i<global_code.size(); i++) {
		if(global_code[i].data1==Jump) {
			if(global_code[i].data2=="") {
				is_leader[global_code[i].result.int_val] = 1;
			}
			else {
				is_leader[global_code[i].result.int_val] = 1;
			}
		}
	}
	cout << "leaders ";
	for (int i=0; i<=global_code.size(); i++) {

		if(is_leader[i]) 
			cout << i << " ";

	}
	cout << endl;
	int label_count = 0;
	for(int i=0; i<=global_code.size(); i++) {
		if(is_leader[i]) {
			label_count += 1;
			label_info[i] = label_count;
			printf("line : %d label: %d\n",i,label_count);
		}
	}
	for(int i=0;i<global_code.size();i++)
	{

		


		//cout <<"Inside For\n";
		if(i!=main_function_line)
			fprintf(text,"L%d:\n",i);
		else
			fprintf(text,"main:\n");
		if(global_code[i].data1 == Jump) {
			create_jump(i);
		}
		else if(global_code[i].data1 == Assignment)
		{
			int j = check_operator(i);
			if(i==87)
				cout << "hellow " << global_code[i].data2 << " "  << global_code[i].result.args_type << " " << global_code[i].arg1.args_type << endl;
			if(j==0)
			{
				if(global_code[i].result.args_type == 1 && global_code[i].data2 == "=")
				{
					if(global_code[i].arg1.temp<=-1)
						fprintf(text,"\tsw $%d %s\n",-global_code[i].arg1.temp,global_code[i].result.var.c_str());
					else
						fprintf(text,"\tsw $%d %s\n",8+global_code[i].arg1.temp,global_code[i].result.var.c_str());
				}
				else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 1 && global_code[i].data2 == "=")
				{
					if(global_code[i].result.temp<=-1)
						fprintf(text,"\tlw $%d %s\n",-global_code[i].result.temp,global_code[i].result.var.c_str());
					else {
						fprintf(text,"\tlw $%d %s\n",8+global_code[i].result.temp,global_code[i].arg1.var.c_str());
					}
				}
				else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 3 &&  global_code[i].data2 == "=")
				{
					if(global_code[i].result.temp<=-1)
						fprintf(text,"\tli $%d %d\n",-global_code[i].result.temp,global_code[i].arg1.int_val);
					else
						fprintf(text,"\tli $%d %d\n",8+global_code[i].result.temp,global_code[i].arg1.int_val);
				}
				else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 2 &&  global_code[i].data2 == "=")
				{
		
						fprintf(text,"\tmove $%d $%d\n",generate_result(global_code[i].result.temp),generate_result(global_code[i].arg1.temp));
				}
			}
		}
		else if (global_code[i].data1 == Array)
		{
			cout << " hello "<< global_code[i].result.args_type << "&" << global_code[i].data2<< "&" << global_code[i].arg1.args_type<<"&" << endl;
			if(global_code[i].result.args_type == 1 && global_code[i].arg1.args_type == 2 && global_code[i].data2 == "[]")
			{
				fprintf(text, "\tla $v1 %s\n",global_code[i].result.var.c_str());
				fprintf(text, "\tmul $%d,$%d,4\n", 8+global_code[i].arg2.temp, 8+global_code[i].arg2.temp);
				fprintf(text, "\tadd $v1,$v1,$%d\n",8+global_code[i].arg2.temp );
				fprintf(text,"\tsw $%d ($v1)\n",8+global_code[i].arg1.temp);
			}
			else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 1 && global_code[i].data2 == "[]")
			{
				fprintf(text, "\tla $v1 %s\n",global_code[i].arg1.var.c_str() );
				fprintf(text, "\tmul $%d,$%d,4\n", 8+global_code[i].arg2.temp, 8+global_code[i].arg2.temp);
				fprintf(text, "\tadd $v1,$v1,$%d\n",8+global_code[i].arg2.temp );
				fprintf(text,"\tlw $%d ($v1)\n",global_code[i].result.temp+8);
			}
			
		}
		else if (global_code[i].data1 = Mipscode) {
			fprintf(text, "\t %s %s %s %s\n",global_code[i].data2.c_str(),global_code[i].arg1.var.c_str(),global_code[i].arg2.var.c_str(),global_code[i].result.var.c_str());
		}
	}
}

