#include<iostream>
using namespace std;

int main()
{
	char ch[10000]={'\0'};
	cin.get(ch,9999);

	int count=0;
	for(int i=0;ch[i]!='\0';i++){
		if(ch[i]!=' ' && ch[i]!='.'){
			count++;
		}
		if((ch[i]==' ' || ch[i]=='.')&& ch[i+1]!=' '){
			cout <<count;
			count=0;
			if(ch[i]!='.'){
				cout <<' ';
			}
		}
	}
	
	return 0;
}
