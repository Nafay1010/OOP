#include <iostream>
using namespace std;
bool isLeap(int year)
{
	bool flag=false;
	if (year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			return true;
			else
			return false;
		}
		else 
		return true;
	}
	else
	return false;
}
int main()
{
	int year;	
	cout<<"Enter the year: ";
	cin>>year;
	if(isLeap(year)==true)
	{
		cout<<year<<" is a leap year[True/False]: ";
		cout<<"true"<<endl;
	}
	else
	{
		cout<<year<<" is a leap year[True/False]: ";
		cout<<"False"<<endl;
	}
}