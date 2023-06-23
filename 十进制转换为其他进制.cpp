#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >>n;
	int a,b;                //将a转换为b进制
	
	for(int i=1;i<=n;i++){
		cin >>a>>b;
		int x=0,y=1,z=0;
		for(int j=0;a!=0;j++){
			x=a%b;
			if(j!=0){
				y=y*10;
			}
			z=z+x*y;
			a=a/b;
		}
		cout <<z<<endl;
	}
	
	return 0;
}
