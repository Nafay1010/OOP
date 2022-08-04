#include<iostream>
using namespace std;
	
int count(int num)
	{
		int r;
		int x=0;
		int count=0;
		while(x!=1)
		{
			r=num%10;
			num=num/10;
			if(r==0)
			{
				x=1;
			}
			else
			{
				count++;
			}
		}
		return count;	
	}
	
	void even_odd(int num,int count)
{
	int r;
	int even_count=0;
	int odd_count=0;
	for(int i=0;i<count;i++)
		{
			r=num%10;
			num=num/10;
			if(r%2==0)
			{
				cout<<r<<" is EVEN"<<endl;
				even_count++;
			}
			else
			{
				cout<<r<<" is ODD"<<endl;
				odd_count++;
			}
		}
		cout<<"EVEN NUMBERS: "<<even_count<<endl;
		cout<<"ODD NUMBERS: "<<odd_count<<endl;
}	
	int main()
	{
		int num;
		cout<<"Enter Number: ";
		cin>>num;
		
		even_odd(num,count(num));
		
	}