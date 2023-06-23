#include<iostream>
using namespace std;

int IsCancel(int *,int ,int );
int IsCancel(int *a,int n,int k){
	int N=n;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			N--;
		}
	}
	if(N<k){
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
	int n,k;
	cin >>n>>k;
	
	int a[1000]={0};
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	
	if(IsCancel(a,n,k)==1){
		cout <<"YES"<<endl;
	}
	else if(IsCancel(a,n,k)==0){
		cout <<"NO"<<endl;
	}
	
	return 0;
}
