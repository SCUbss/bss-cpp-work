#include<iostream>
using namespace std;

class Funtion
{
	public :
		int tiqu_a(char *x){
			int a=0;
			for(int i=0;x[i]!='/';i++){
				a=a*10+x[i]-48;
			}
			return a;
		}
		int tiqu_b(char *x){
			int b=0;
			for(int i=3;x[i]!='\0';i++){
				b=b*10+x[i]-48;	
			}
			return b;
		}
		void jisuan(int a,int b){
			int c;
			cout <<"0.";
			for(int count=1;count<=200 || a==0;count ++){
				a=a*10;
				c=a/b;
				a=a%b;
				cout <<c;
			}
			cout <<endl;
		}
	private :
		char x[10];
};

int main()
{
	Funtion f;
	char x[10];
	cin >>x;
	int a,b;
	a=f.tiqu_a(x);
	b=f.tiqu_b(x);
	f.jisuan(a,b);
	
	return 0;
}
