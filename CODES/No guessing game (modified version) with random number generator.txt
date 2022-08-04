
#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
	int num,guess;
	int diff;
	bool flag=true;
	
	srand(time(NULL));
	num=rand()%100;
	cout<<"Secret number: "<<num<<endl;
			
	cout<<"You have 5 attempts"<<endl;
	
	for(int i=1;i<=5;i++)
	{
		if(flag=false)
		break;
	cout<<"Guess the number: ";
	cin>>guess;
	diff=(num-guess);
	diff=abs(diff);
	cout<<endl;
	if(diff==0)
	{
		cout<<"CONGRATS U DID IT !!!!!"<<endl;
		flag=false;
	}
	else if(guess>num)
	{
				if(diff>=50)
		{
		cout<<"Your guess is very high"<<endl;
	    }
	    else if(diff>=30 && diff<50)
	    {
	    	cout<<"Your guess is high"<<endl;
		}
		else if(diff>=15 && diff<30)
		{
			cout<<"Your guess is moderately high"<<endl;
		}
		else if(diff>=0 && diff<15)
		{
			cout<<"Your guess is somewhat high"<<endl;
		}
	}
	else if(guess<num)
	{
			if(diff>=50)
		{
		cout<<"Your guess is very low"<<endl;
	    }
	else if(diff>=30 && diff<50)
	{
		cout<<"Your guess is low"<<endl;
	}
		else if(diff>=15 && diff<30)
		{
			cout<<"Your guess is moderately low"<<endl;
		}
			else if(diff>=0 && diff<15)
		{
			cout<<"Your guess is somewhat low"<<endl;
		}
	}
	if(i<5)
	{
	cout<<"Try again U have "<<5-i<<" attempts left"<<endl;
}
 }
 cout<<endl;
	cout<<"U LOST !!!"<<endl;
cout<<"Better luck next time !"	<<endl;
}