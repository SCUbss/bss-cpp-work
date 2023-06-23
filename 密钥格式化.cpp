#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char S[10000]={'\0'};
	int K;
	cin.get(S,10000);
	int lengh_S=strlen(S);
	cin >>K;
	for(int i=0;i<lengh_S;i++){
		if(S[i]=='-'){
			for(int j=i;j<lengh_S;j++){
				S[j]=S[j+1];
			}
			lengh_S--;
		}
		if(S[i]>=97 && S[i]<=122){
			S[i]=S[i]-32;
		}
	}	
	int x=lengh_S/K,y=lengh_S%K;
	if(y==0){
		for(int n=1;n<=x;n++){
			int count=0;
			for(int i=(n-1)*K;count!=K;count++,i++){
				cout <<S[i];
			}
			if(n!=x){
				cout <<'-';
			}
		}
	}
	else{
		for(int n=0;n<=x;n++){
			int count=0;
			if(n==0){
				for(int i=0;i<y;i++){
					cout <<S[i];
				}
				cout <<'-';
			}
			else{
				for(int i=(n-1)*K+y;count!=K;count++,i++){
					cout <<S[i];
				}
				if(n!=x){
					cout <<'-';
				}
			}
		}
	}
	
	return 0;
}
