#include<vector>
#include<utility>
#include "resources.h"
using namespace std;


void codegen() {
		printf("=======mips code==== %d\n",global_code.size());

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
					is_leader[i+1] = 1;
				}
			}
		}

			
		
		int start = 0,end =0;
		for(int i=1; i<=global_code.size(); i++) {
			while(!is_leader[i])
				i++;
			end = i-1;
			cout << start  << " " << end << endl;
			vector <pair<int,int> > live;
			for(int j=end; j>=start; j--) {

				if(global_code[j].data1==Assignment) {

					if(global_code[j].result.args_type==2) {

						for(int k=0; k<live.size();k++) {
							if(live[k].first==global_code[j].result.temp) {
								global_code[j].result.temp = live[k].second;
								live.erase(live.begin()+k);

							}
						}
					}

					if(global_code[j].arg1.args_type == 2){
						int flag = 1;
						for(int k=0; k<live.size();k++) {
							if(live[k].first==global_code[j].arg1.temp) {
								flag = 0; 
								global_code[j].arg1.temp = live[k].second;
							}
						}

						if(flag==1) {

							live.push_back(make_pair(global_code[j].arg1.temp,live.size()+1));
							global_code[j].arg1.temp = live.size();
						}
					}
					if(global_code[j].arg2.args_type == 2){
						int flag = 1;
						for(int k=0; k<live.size();k++) {
							if(live[k].first==global_code[j].arg2.temp) {
								flag = 0; 
								global_code[j].arg2.temp = live[k].second;
							}
						}
						if(flag==1) {
							live.push_back(make_pair(global_code[j].arg2.temp,live.size()+1));
							global_code[j].arg2.temp = live.size();
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
		fprintf(text,"\tadd $t%d,$t%d,$t%d\n",global_code[i].result.temp,global_code[i].arg1.temp,global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "-")
	{
		fprintf(text,"\tsub $t%d,$t%d,$t%d\n",global_code[i].result.temp,global_code[i].arg1.temp,global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "/")
	{
		fprintf(text,"\tdiv $t%d,$t%d,$t%d\n",global_code[i].result.temp,global_code[i].arg1.temp,global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "*")
	{	
		fprintf(text,"\tmul $t%d,$t%d,$t%d\n",global_code[i].result.temp,global_code[i].arg1.temp,global_code[i].arg2.temp);
		return 1;
	}
	else if(global_code[i].data2 == "MOD")
	{
		fprintf(text,"\trem $t%d,$t%d,$t%d\n",global_code[i].result.temp,global_code[i].arg1.temp,global_code[i].arg2.temp);
		return 1;
	}
	return 0;
}

void create_mips()
{
	
	text =  fopen("misp_code.s","w");
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
					is_leader[i+1] = 1;
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
	for(int i=0;i<global_code.size();i++)
	{
		if(global_code[i].data1 == Assignment)
		{
			if(is_leader[i])
			{
				label_count+=1;
				fprintf(text,"L%d:\n",label_count);
			}

				int j = check_operator(i);

				if(j==0)
				{
					if(global_code[i].result.args_type == 1 && global_code[i].data2 == "=")
					{
						fprintf(text,"\tsw t%d scope1\n",global_code[i].arg1.temp);
					}
					else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 1 && global_code[i].data2 == "=")
					{
						fprintf(text,"\tlw t%d scope1\n",global_code[i].result.temp);

					}
					else if(global_code[i].result.args_type == 2 && global_code[i].arg1.args_type == 3 &&  global_code[i].data2 == "=")
					{
						fprintf(text,"\tmv t%d %d\n",global_code[i].result.temp,global_code[i].arg1.int_val);
					}
				}
		}

	}
}
