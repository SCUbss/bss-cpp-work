#include<iostream>
using namespace std;

int main()
{
	int a,b=0,c=1,d=0;
	cin >>a;
	
	for(int i=0;a!=0;i++){
		b=a%8;
		if(i!=0){
			c=c*10;
		}
		d=d+b*c;
		a=a/8;
	}
	cout <<d;
	
	return 0;
}
