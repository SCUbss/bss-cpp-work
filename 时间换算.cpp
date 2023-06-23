#include<iostream>
using namespace std;

int weishu(int );
int weishu(int BJT){
	int count=0;
	for(;BJT!=0;){
		BJT=BJT/10;
		count ++;		
	}
	return (count >=3);
}


int tiqu(int );
int tiqu(int BJT){
	BJT=BJT/100;
	int x=0;
	for(int i=1;BJT!=0;i++){
		if(i==1){
			x=BJT%10;
		}
		else{
			x=(BJT%10)*10+x;
		}
		BJT=BJT/10;
	}
	return x;
}

int main()
{
	int BJT,UTC;
	cin >>BJT;

	if(weishu(BJT)==1){
		int x;
		x=tiqu(BJT);
		if(x>=8){
			UTC=BJT-800;	
		}
		else{
			UTC=1600+BJT;
		}
	}
	cout <<UTC<<endl;
	
	return 0;
}
