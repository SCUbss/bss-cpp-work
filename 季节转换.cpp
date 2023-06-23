#include<iostream>
using namespace std;

void season(int );
void season(int N){
	if(N==1){
		cout <<"Spring"<<endl;
	}
	else if(N==2){
		cout <<"Summer"<<endl;
	}
	else if(N==3){
		cout <<"Fall"<<endl;
	}
	else{
		cout <<"Winter"<<endl;
	}
}

int main()
{
	int N;
	cin >>N;
	season(N);
	
	return 0;
}
