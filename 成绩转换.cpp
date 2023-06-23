#include<iostream>
using namespace std;

void grade(int );
void grade(int score){
	switch(score){
		case 0 ... 59 : cout <<"E"<<endl;break;
		case 60 ... 69 : cout <<"D"<<endl;break;
		case 70 ... 79 : cout <<"C"<<endl;break;
		case 80 ... 89 : cout <<"B"<<endl;break;
		case 90 ... 100 : cout <<"A"<<endl;break;	 
	}
}
int main()
{
	int score;
	cin >>score;
	grade(score);
	
	return 0;
}
