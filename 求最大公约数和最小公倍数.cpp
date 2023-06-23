#include<iostream>
using namespace std;

class Function
{
	public :
		int gongyueshu(int a,int b){
			int x=1;
			for(int i=2;i<=a && i<=b;i++){
				if(a%i==0 && b%i==0){
					x=i;
				}
			}
			return x;
		}
		
		int gongbeishu(int a,int b){
			int y=a*b;
			for(int i=1;i<=a && i<=b;i++){
				if(a%i==0 && b%i==0){
					y=y/i;
				}
			}
			return y;
		}
		
	private :
		int a;
		int b;
};

int main()
{
	Function f;
	int a,b;
	cin >>a>>b;
	cout <<f.gongyueshu(a,b)<<endl<<f.gongbeishu(a,b);
	
	return 0;
}
