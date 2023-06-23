#include<iostream>
using namespace std;

int sort(int num[],int n);
int sort(int num[],int n){
	for(int i=0;i<n-1;i++){
		int x=i;
		for(int j=i+1;j<n;j++){
			if(num[i]>num[j]){
				x=j;
			}
		}
		if(x!=i){
			int y=num[i];
			num[i]=num[x];
			num[x]=y;
		}	
	}

	return 0;
}

int main()
{
	int n,num[100]={0};
	cin >>n;
	
	for(int i=0;i<n;i++){
		cin >>num[i];
	}
	sort(num,n);

	for(int i=0;i<n;i++){
		cout <<num[i];
		if(i!=n-1){
			cout <<" ";
		}
		else{
			cout <<endl;
		}
	}
	return 0;
}
