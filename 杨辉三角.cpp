#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >>N;
	int a[15][15]={0};
	a[0][0]=1;
	a[1][0]=1;a[1][1]=1;

	for(int i=2;i<N;i++){
		for(int j=1;j<=i;j++){
			a[i][0]=1;a[i][i]=1;
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<=i;j++){
			cout <<a[i][j]<<' ';
		}
		cout <<endl;
	}
	
	return 0;
}
