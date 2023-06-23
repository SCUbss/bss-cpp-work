#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class Student
{
	public:
		char name[30];
		float pingshi;
		float qimo;
		float sum;
		float zong(int ,int );
};

float zong(float pingshi,float qimo){
	float sum;
	sum=pingshi*0.4+qimo*0.6;
	
	return sum;
}

int main()
{
	Student *s=new Student[100];
	cout <<fixed<<setprecision(2);
	
	int N=0;
	while(cin >>s[N].name){
		cin >>s[N].pingshi;
		cin >>s[N].qimo;
		s[N].sum=zong(s[N].pingshi,s[N].qimo);
		N++;
	}
	
	for(int i=0;i<N;i++){
		int x=i;
		for(int j=i+1;j<N;j++){
			if(s[x].sum<s[j].sum){
				x=j;
			}
		}
		if(x!=i){
			char m[30];
			strcpy(m,s[x].name);
			strcpy(s[x].name,s[i].name);
			strcpy(s[i].name,m);
			
			float middle;
			middle=s[x].pingshi;
			s[x].pingshi=s[i].pingshi;
			s[i].pingshi=middle;
			
			middle=s[x].qimo;
			s[x].qimo=s[i].qimo;
			s[i].qimo=middle;
			
			middle=s[x].sum;
			s[x].sum=s[i].sum;
			s[i].sum=middle;
		}		
	}
	
	for(int i=0;i<N;i++){
		cout <<s[i].name<<' '<<s[i].pingshi<<' '<<s[i].qimo<<' '<<s[i].sum<<endl;
	}
	delete []s;
	
	return 0;
}
