#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>

using namespace std;

int E_Z_O(int number)
{
	int even=0,odd=0,zero=0,rem=0;
	while(number>0)
	{
		rem= number%10;
		if(rem==0)
		zero++;
		else if(rem%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		number=number/10;
	}
	cout<<number<<" contains "<<even<<" even digits."<<endl;
	cout<<number<<" contains "<<odd<<" odd digits."<<endl;
	cout<<number<<" contains "<<zero<<" zero digits."<<endl;
}

main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
E_Z_O(num);
}