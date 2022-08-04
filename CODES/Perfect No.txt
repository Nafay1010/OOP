#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>

using namespace std;

void perfect_no(int number)
{
	if(number!=00)
	{
	int sum;
	cout<<"Proper divisor of "<<number<<" are:"<<endl;
	for(int i =1;i<number;i++)
	{
		if(number%i==0)
		{
		cout<<i<<endl;
		sum+=i;
        }
	}
	cout<<"Sum of proper divisor = "<<sum<<endl;
	cout<<endl;
	if(number==sum)
	cout<<"Hence "<<number<<" is a perfect Number"<<endl;
	else
	cout<<"Hence "<<number<<" is NOT a perfect Number"<<endl;
	
	
}
cout<<endl;
}

int main()
{
	int no_;
	char quit;
	do
	{
	cout<<"Enter a number[Enter '00' to quit]: ";
	cin>>no_;
 perfect_no(no_);
   }
   while(no_!=00);
}