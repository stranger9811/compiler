#include<vector>
#include <algorithm>
#include<utility>
#include "resources.h"
using namespace std;
extern int main_function_line ;

void codegen() 
{

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
		printf("\tadd $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "-")
	{
		printf("\tsub $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "/")
	{
		printf("\tdiv $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "*")
	{	
		printf("\tmul $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "MOD")
	{
		printf("\trem $%d,$%d,$%d\n",8+global_code[i].result.temp,8+global_code[i].arg1.temp,8+global_code[i].arg2.temp);
		return 1;
	}
	return 0;
}
void create_jump(int i)
{
	if(global_code[i].data2.empty()) {
		printf( "\tb L%d\n",global_code[i].result.int_val);
		//printf("simple jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2=="==") {
		printf( "\tbeq $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2==">=") {
		printf( "\tbge $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2=="<=") {
		printf( "\tble $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2==">") {
		printf( "\tbgt $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2=="<") {
		printf( "\tblt $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
		//printf("conditional jump to %d\n",global_code[i].result.int_val);
	}
	else if(global_code[i].data2=="!=") {
		printf( "\tbne $%d,$%d,L%d\n",8+global_code[i].arg1.temp,8+global_code[i].arg2.temp,global_code[i].result.int_val);
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
	
	cout << endl;
	int label_count = 0;
	for(int i=0; i<=global_code.size(); i++) {
		if(is_leader[i]) {
			label_count += 1;
			label_info[i] = label_count;
		}
	}
	for(int i=0;i<global_code.size();i++)
	{

		

		//cout <<"Inside For\n";
		if(i!=main_function_line)
			printf("L%d:\n",i);
		else
			printf("main:\n");
		if(global_code[i].data1 == Jump) {
			create_jump(i);
		}
		else if(global_code[i].data1 == Assignment)
		{
			int j = check_operator(i);
			
			if(j==0)
			{
				if(global_code[i].result.args_type == 1 && global_code[i].data2 == "=")
				{
					if(global_code[i].arg1.temp<=-1)
						printf("\tsw $%d %s\n",-global_code[i].arg1.temp,global_code[i].result.var.c_str());
					else
						printf("\tsw $%d %s\n",8+global_code[i].arg1.temp,global_code[i].result.var.c_str());
				}
				else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 1 && global_code[i].data2 == "=")
				{
					if(global_code[i].result.temp<=-1)
						printf("\tlw $%d %s\n",-global_code[i].result.temp,global_code[i].result.var.c_str());
					else {
						printf("\tlw $%d %s\n",8+global_code[i].result.temp,global_code[i].arg1.var.c_str());
					}
				}
				else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 3 &&  global_code[i].data2 == "=")
				{
					if(global_code[i].result.temp<=-1)
						printf("\tli $%d %d\n",-global_code[i].result.temp,global_code[i].arg1.int_val);
					else
						printf("\tli $%d %d\n",8+global_code[i].result.temp,global_code[i].arg1.int_val);
				}
				else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 2 &&  global_code[i].data2 == "=")
				{
		
						printf("\tmove $%d $%d\n",generate_result(global_code[i].result.temp),generate_result(global_code[i].arg1.temp));
				}
			}
		}
		else if (global_code[i].data1 == Array)
		{
			if(global_code[i].result.args_type == 1 && global_code[i].arg1.args_type == 2 && global_code[i].data2 == "[]")
			{
				printf( "\tla $v1 %s\n",global_code[i].result.var.c_str());
				printf( "\tmul $%d,$%d,4\n", 8+global_code[i].arg2.temp, 8+global_code[i].arg2.temp);
				printf( "\tadd $v1,$v1,$%d\n",8+global_code[i].arg2.temp );
				printf("\tsw $%d ($v1)\n",8+global_code[i].arg1.temp);
			}
			else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 1 && global_code[i].data2 == "[]")
			{
				printf( "\tla $v1 %s\n",global_code[i].arg1.var.c_str() );
				printf( "\tmul $%d,$%d,4\n", 8+global_code[i].arg2.temp, 8+global_code[i].arg2.temp);
				printf( "\tadd $v1,$v1,$%d\n",8+global_code[i].arg2.temp );
				printf("\tlw $%d ($v1)\n",global_code[i].result.temp+8);
			}
			
		}
		else if (global_code[i].data1 = Mipscode) {
			printf( "\t %s %s %s %s\n",global_code[i].data2.c_str(),global_code[i].arg1.var.c_str(),global_code[i].arg2.var.c_str(),global_code[i].result.var.c_str());
		}
	}
}

