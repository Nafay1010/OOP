
#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
	int num;
    	int count=0;
	cout<<"Enter a number to check whether or not if its a prime number or not: ";
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<num<<" is a prime number"<<endl;
		
	}
	else
	{
		cout<<num<<" is a composite number"<<endl;
	}
} 