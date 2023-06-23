#include<iostream>
using namespace std;

int main()
{
	int ci[100][1]={0},xi[100][1]={0};
	int s=0,s_i=0;
	int n=0,N=0;
	while(cin >>ci[s][0]){
		cin >>xi[s][0];
		if(ci[s][0]==0 && N==0){
			s_i=s;
			N++;
		}
		n=s;
		s++;
	}
	
	int count=0;
	for(int i=0;i<=s_i;i++){
		for(int j=s_i+1;j<=n;j++){
			if(ci[i][0]==ci[j][0]){
				xi[i][0]=xi[i][0]+xi[j][0];
				ci[j][0]=-1;
				count ++;
			}
		}
	}
	
	for(int i=0;i<=n;i++){
		int x=ci[i][0],sign=i;
		for(int j=i+1;j<=n;j++){
			if(x<ci[j][0] && ci[j][0]!=-1){
				x=ci[j][0];
				sign=j;
			}
		}
		if(x!=ci[i][0]){
			int y=ci[i][0];
			ci[i][0]=x;
			ci[sign][0]=y;
			
			int z=xi[i][0];
			xi[i][0]=xi[sign][0];
			xi[sign][0]=z;
		}
	}
	for(int i=0;i<=n-count;i++){
		if(ci[i][0]==0 && xi[i][0]!=0){
			cout <<xi[i][0];
		}
		else if(ci[i][0]==1 && xi[i][0]!=0){
			if(xi[i][0]!=1){
				cout <<xi[i][0]<<'x';
			}
			else{
				cout <<'x';
			}
		}
		else if(ci[i][0]!=0 && ci[i][0]!=1 && xi[i][0]!=0){
			if(xi[i][0]!=1){
				cout <<xi[i][0]<<'x'<<ci[i][0];
			}
			else{
				cout <<'x'<<ci[i][0];
			}
		}
		if(i!=n-count && xi[i][0]!=0){
			cout <<'+';
		}
	}
	
	return 0;
}
