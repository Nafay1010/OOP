#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	int num,guess;
	bool flag=true;
	num=1+(rand()%100);
	cout<<"Random secret number: "<<num<<endl;
	
	for(int i=1;i<=5;i++)
	{
		if(flag=false)
		break;
	cout<<"Now guess the number: ";
	cin>>guess;
	cout<<endl;
	if(guess==num)
	{
		cout<<"CONGRATS U TOTALY JUST WASTED YOUR TIME !!!!!"<<endl;
		flag=false;
	}
	else if(guess>num)
	{
		cout<<"Your number is larger then the secret number"<<endl;
	}
	else
	{
		cout<<"Your number is samller then the secret number"<<endl;
	}
	}
	cout<<"HAHA U LOST !!!"<<endl;
}