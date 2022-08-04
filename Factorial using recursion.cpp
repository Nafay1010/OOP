
#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

int factorial (int number)
{
	if(number ==1)
	{
	return 1;
    }
	return number*factorial(number-1);
}

int main()
{
int number;
cout<<"Enter a number: ";
cin>>number;
cout<<number<<"! = "<<factorial(number)<<endl;
}