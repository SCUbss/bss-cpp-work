//输入一个十进制数N，将它转换为R进制输出
#include<iostream>
using namespace std;
int huan(char *,int );

int huan(char a,int x){
	if(x==10){
		a='A';
	}
	if(x==11){
		a='B';
	}
	if(x==12){
		a='C';
	}
	if(x==13){
		a='D';
	}
	if(x==14){
		a='E';
	}
	if(x==15){
		a='F';
	}
	
	return a;
}


int main()
{
	int N,R;
	while(cin >>N){
		cin >>R;
		if(R<10){
			int a=0,b=1,c=0;
			for(int i=0;N!=0;i++){
				a=N%R;
				if(i!=0){
					b=b*10;
				}
				c=c+a*b;
				N=N/R;
			}
			cout <<c<<endl;	
		}
		if(R>10){
			char a[100]={'0'};
			int x=0,count=0;
			for(int i=0;N!=0;i++){
				x=N%R;
				if(x>=10){
					a[i]=huan(a[i],x);
				}
				else{
					a[i]=x+48;
				}
				N=N/R;
				count=i;
			}
			for(int i=count;i>=0;i--){
				cout <<a[i];
			}
			cout <<endl;
		}
	}
	
	return 0;
}
