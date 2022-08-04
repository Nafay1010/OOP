#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void generate(int a[])
{
	bool dup=false;
	for(int i=0;i<5;i++)
	{
		do
		{
			a[i]=(rand()%30)+1;
			for(int j=i-1;j>-1;j--)
			{
				if(a[i]==a[j])
				dup=true;
			}
		
		}while(dup);	
	}
	cout<<endl;
	
}
void sort(int a[])
{
	int min;
	int temp;
for(int i=0;i<5;i++)
{
	for(int j=i;j<5;j++)
	{
		if(a[i]>a[j])
		{
	      temp=a[i];
 	      a[i]=a[j];
	      a[j]=temp;
	    }
	}
}
}
void input_user(int a[])
{
	int num;
	//Asking the user to input and storing them into an array
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a number between 1 and 40 inclusive: ";
	    cin>>a[i];
	    
		if(a[i]<1 || a[i]>40)
		{
		cout<<"NUMBER OUT OF BOUNDS"<<endl;
		i=i-1;
		continue;
	    }
	}
	cout<<endl;
	cout<<"User's array: "<<endl;
	//Output the user input
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void compare(int a[],int u[])
{
	int count=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i]==u[j])
			count++;
		}
	}
	if(count==5)
	{
		cout<<"YOU WON !!"<<endl;
	}
	else
	{
		cout<<"YOU LOST !!"<<endl;
		cout<<"Lottery numbers"<<endl;
		for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
		
	}
}
int main()
{
	int a[5];
	int u[5];
	char ask;
	srand(time(NULL));
    cout<<"===========WELCOME TO THE LOTTERY GAME==========="<<endl;
    cout<<"Enter 5 numbers between 1 and 40 to win the lottery"<<endl;
	do 
	{
	generate(a);
	sort(a);
    input_user(u);
    compare(a,u);
	cout<<"Do you want to keep playing [Enter 'Y/y']: ";
	cin>>ask;
    }while(ask=='y'|| ask=='Y');
}