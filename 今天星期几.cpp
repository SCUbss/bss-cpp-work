#include<iostream>
using namespace std;
//1900.1.1   Monday 

int IsLeapYear(int );
int IsLeapYear(int year){
	if((year%4==0 && year%100!=0) || year%400==0){
		return 1;
	}
	else{
		return 0;
	}
}

int Year(char *,int );
int Year(char *a,int year){
	for(int i=0;a[i]!='-';i++){
		year=year*10+a[i]-'0';
	}
	return year;
}

int Month(char *,int );
int Month(char *a,int month){
	for(int i=5;a[i]!='-';i++){
		month=month*10+a[i]-'0';
	}
	return month;
}

int Day(char *,int );
int Day(char *a,int day){
	for(int i=8;a[i]!='\0';i++){
		day=day*10+a[i]-'0';
	}
	return day;
}

int chatian(int ,int ,int );
int chatian(int year,int month,int day){
	int y=year-1900;
	int y1=y/4,y2=y%4;
	int yd=0;
	if(y>=100){
		y=y/100;
		yd=y1*1461+y2*365-(y-1)*3/4-(y-1)%4;
	}
	else{
		yd=y1*1461+y2*365;
	}
	
	int md=0;
	for(int i=1;i<month;i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
			md=md+31;
		}
		else if(i==4 || i==6 || i==9 || i==11){
			md=md+30;
		}
		else{
			if(IsLeapYear(year)==1){
				md=md+29;
			}
			else{
				md=md+28;
			}
		}
	}
	
	int dd=day-1;
	int sumday=yd+md+dd;
	
	return sumday;		
}

void shuchu(int );
void shuchu(int sumday){
	int day=sumday%7+1;
	switch(day){
		case 1 : cout <<"Monday"<<endl;break;	
		case 2 : cout <<"Tuesday"<<endl;break;
		case 3 : cout <<"Wednesday"<<endl;break;
		case 4 : cout <<"Thursday"<<endl;break;
		case 5 : cout <<"Friday"<<endl;break;
		case 6 : cout <<"Saturday"<<endl;break;
		case 7 : cout <<"Sunday"<<endl;break;
		default: break;
	}
	
}

int main()
{
	char a[100];
	cin >>a;
	
	int year=0,month=0,day=0;
	year=Year(a,year);
	month=Month(a,month);
	day=Day(a,day);
	
	int sumday=chatian(year,month,day);
	shuchu(sumday);
	
	return 0;
}
