#include<iostream>
using namespace std;

int even(int );
int even(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
	int n,sum=0;
	while(cin >>n){
		if(n<=0){
			break;
		}
		else{
			if(even(n)==0){
				sum +=n;
			}	
		}
	}
	cout <<sum<<endl;
	
	return 0;
}
