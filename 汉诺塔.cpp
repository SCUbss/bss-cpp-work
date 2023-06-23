#include<iostream>
using namespace std;
int count=0;

void move(int N,char m,char n)
{
	count++;
	cout <<"Step"<<count<<": "<<"Move Disk"<<N<<" from "<<m<<" to "<<n<<endl;
}
void hannuota(int n,char a,char b,char c)
{
	if(n==1){
		move(n,a,c);
	}
	else{
		hannuota(n-1,a,c,b);
		move(n,a,c);
		hannuota(n-1,b,a,c);
	}
}

int main()
{
	int N;
	cin >>N;
	hannuota(N,'A','B','C');
	
	return 0;	
}
