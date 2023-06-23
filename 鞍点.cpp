#include<iostream>
using namespace std;

int main()
{
	int n ;
	cin >>n;
	int a[100][100]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >>a[i][j];
		}
	}
	
	int sign=0;
	for(int i=0;i<n;i++){
		int x=a[i][0],count=1;
		int J[100]={0};
		for(int j=1;j<n;j++){
			if(x<a[i][j]){
				x=a[i][j];
				J[count-1]=j;
			}
		}
		for(int j=1;j<n;j++){
			if(x==a[i][j] && j!=J[0]){
				count ++;
				J[count-1]=j;
			}
		}
		for(int N=1;N<=count;N++){
			for(int k=0;k<n;k++){
				if(x>a[k][J[N-1]]){
					break;
				}
				if(k==n-1){
					cout <<i<<' '<<J[N-1]<<endl;
					sign=1;
				}
			}
			if(sign==1){
				break;
			}
		}
		if(sign==1){
			break;
		}
		if(i==n-1 && sign==0){
			cout <<"NO"<<endl;
		}
	}	
	
	return 0;
}
