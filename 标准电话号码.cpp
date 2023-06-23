#include<iostream>
using namespace std;

void Sort(char );
void Sort(char num){
	switch(num){
		case 65 ... 67 : cout <<"2";break;
		case 68 ... 70 : cout <<"3";break;
		case 71 ... 73 : cout <<"4";break;
		case 74 ... 76 : cout <<"5";break;
		case 77 ... 79 : cout <<"6";break;
		case 80 ... 83 : cout <<"7";break;
		case 84 ... 86 : cout <<"8";break;
		case 87 ... 90 : cout <<"9";break;
	}	
}

int main()
{
	char num[7]={'\0'};
	for(int i=0;i<7;i++){
		cin >>num[i];
		Sort(num[i]);
	}
	
	return 0;
}
