#include<iostream>
using namespace std;

int main()
{
	char a[20];
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	
	int b=0;
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j] && a[j]!='a'){
				count++;
				a[j]='a';
			}
		}
		if(count==2){
			b=a[i];
			cout <<a[i]<<' ';
		}	
	}
	if(b==0){
		cout <<"none"<<endl;
	}
	
	return 0;
}
