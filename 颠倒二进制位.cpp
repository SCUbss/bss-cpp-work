#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char num[35];
	while(cin >>num){
		;
	}
	int count=strlen(num);
	
	for(int i=count-1;i>=0;i--){
		cout <<num[i];
	}
	
	return 0;
}
