#include<iostream>
#include<cstring>
using namespace std;

int mystrstr(char a[],char b[]){
	int length_b=strlen(b),s=0;
	for(int i=0;a[i]!='\0';i++){
		if(b[0]==a[i]){
			int count=1;
			s=i;
			for(int j=1;b[j]!='\0';j++,i++){
				if(b[j]==a[i+1]){
					count++;
				}
				else{
					i=s;
					break;
				}
			}
			if(count==length_b){
				break;
			}
		}
	}
	return s;
}


int main()
{
	char a[500],b[500];
	cin >>a;
	cin >>b;
	cout <<mystrstr(a,b)<<endl;
	
	return 0;
}
