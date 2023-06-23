#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char email[100];	
	cin >>email;
	
	int LEN=strlen(email);
	int count_at=0;
	int count_dot=0;
	
	for(int i=0;email[i]!='\0';i++){
		if((email[i]>='0' && email[i]<='9') || (email[i]>='a' && email[i]<='z') || (email[i]>='A' && email[i]<='Z') || email[i]=='-' || email[i]=='_' || email[i]=='.' || email[i]=='@'){
			if(email[i]=='@'){
				count_at++;
			}
			if(email[i]=='.'){
				count_dot++;
			}
		}
	}
	if(count_at==1 && count_dot==1){
		if(email[0]!='@' && email[LEN]!='@' && email[LEN]!='.'){
			int sign=0;
			for(int i=0;email[i]!='@';i++){
				sign=i+1;
			}
			if(email[sign+1]!='.'){
				cout <<"yes"<<endl;
			}
			else{
				cout <<"no"<<endl;	
			}	
		}
	}
	else{
		cout <<"no"<<endl;
	}
	
	return 0;
}
