#include<iostream>
#include<iomanip>
using namespace std;

float pingjun(int *,int );
float pingjun(int *shu,int N){
	float sum=0;
	for(int i=0;i<N;i++){
		sum +=shu[i];
	}
	
	return sum/N;
}

float fangcha(int *,float ,int );
float fangcha(int *shu,float pingjun,int N){
	float sum=0;
	for(int i=0;i<N;i++){
		sum +=(pingjun-shu[i])*(pingjun-shu[i]);
	}
	
	return sum/N;
}

int main()
{
	int n,N=6;
	cin >>n;
	int shu[6];
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<N;j++){
			cin >>shu[j];
		}	
		float x,y;
		x=pingjun(shu,N);
		y=fangcha(shu,x,N);
		
		cout <<fixed<<setprecision(2);
		cout <<x<<' '<<y<<endl;
	}

	return 0;
}
