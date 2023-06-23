#include<iostream>
#include<algorithm> 
using namespace std;

int main()
{
	char str[10000];
	char temp;
	
	int LEN=0;
	
	while((temp=cin.get())!='\n'){
		str[LEN]=temp;
		LEN++;
	}
	sort(str,str+LEN);

	int count[30]={0},n=0;
	count[0]=1;
	for(int i=1;str[i]!='\0';i++){
		if(str[i]!=str[i-1]){
			n++;
			count[n] ++;
		}	
		else{
			count[n] ++;
		}
	}
	sort(count,count+n+1,greater<int>());
	
	int sum=0,s=26;
	for(int i=0;i<=n;i++,s--){
		sum=sum+count[i]*s;
	}
	cout <<sum<<endl;
	
	return 0;
}
