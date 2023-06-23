#include<iostream>
using namespace std;

int huiwen(int );
int huiwen(int x){
	int y=0,z=0,w=x;
	for(;x!=0;){
		y=x%10;
		z=z*10+y;
		x=x/10;
	}
	if(z==w){
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
	int N;
	cin >> N;
	for(int i=1;i<=N;i++){
		int m,k;
		cin >>m>>k;
		
		for(int j=m+1,count=0;;j++){
			if(huiwen(j)==1){
				cout <<j<<' ';
				count++;
			}
			if(count==k){
				cout <<endl;
				break;
			}
		}	
	}
	
	return 0;
}
