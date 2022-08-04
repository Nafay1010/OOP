#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>

using namespace std;

void reversedigit(int num)
{	
int digit;
	while(num!=0)
	{
		if(num<0)
		{
			num=-1*num;
			digit=num%10;
			num=num/10;
			cout<<"-"<<digit;
		}
		else
		{
		digit=num%10;
		num=num/10;
		cout<<digit;
	    }
	}
}


int main()
{
	int input,x;
	cout<<"Enter number: ";
	cin>>input;
reversedigit(input);
}