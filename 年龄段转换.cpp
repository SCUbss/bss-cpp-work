#include<iostream>
using namespace std;

void age(int );
void age(int N){
	switch(N){
		case 1 ... 10 : cout <<"Children"<<endl;break;
		case 11 ... 20 : cout <<"Teenagers"<<endl;break;
		case 21 ... 40 : cout <<"Youth"<<endl;break;
		case 41 ... 50 : cout <<"middle-aged"<<endl;break;
		case 51 ... 80 : cout <<"Elderly"<<endl;break;
		case 81 ... 100 : cout <<"Old man"<<endl;break;
		default : break;
	}
}

int main()
{
	int N;
	cin >>N;
	age(N);
	
	return 0;
}
