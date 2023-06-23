#include<iostream>
using namespace std;

float zhouchang(int );
float zhouchang(int r){
	float c;
	c=2*3.14*r;
	
	return c;
}

float mianji(int );
float mianji(int r){
	float s;
	s=3.14*r*r;
	
	return s;
}

int main()
{
	int r;
	cin >>r;
	
	int d=0;
	float c=0,s=0;
	d=2*r;
	c=zhouchang(r);
	s=mianji(r);
	
	cout <<"直径="<<d<<endl;
	cout <<"周长="<<c<<endl;
	cout <<"面积="<<s<<endl;
	
	return 0;
}
