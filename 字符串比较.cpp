#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[10000]={'\0'},b[10000]={'\0'};
	cin.get(a,10000);
	cin.sync();
	cin.get(b,10000);
	
	int lengh_a=strlen(a);
	int lengh_b=strlen(b);
	int sign[10000]={0};
	int x=0;
	for(int i=0;i<lengh_b;i++){
		if(b[i]==a[0]){
			int s=1;
			for(int j=i+1;s<lengh_a;j++,s++){
				if(b[j]!=a[s]){
					i=j-1;
					break;
				}
				if(s==lengh_a-1){
					sign[x]=i;
					x++;
					i=j-1;
				}
			}
		}
	}
	
	for(int i=0;i<x;i++){
		cout <<sign[i];
		if(i!=x-1){
			cout <<' ';
		}
		else{
			cout <<endl;
		}
	}
	
	return 0;
}
