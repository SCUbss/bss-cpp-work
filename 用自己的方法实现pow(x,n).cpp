#include<iostream>
using namespace std;

double pow(double ,int );
double pow(double x,int n){
	long double pow=1;
	for(int i=1;i<=n;i++){
		pow=pow*x;
	}
	
	return pow;
}

int main()
{
	double x;
	int n;
	cin >>x>>n;
	cout <<pow(x,n);
	
	return 0;
}
