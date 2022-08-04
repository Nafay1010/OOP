#include<iostream>

using namespace std;


int Search_value(int *ptr,int S_I,int a[5])
{
	bool found=false;
		ptr=a;
	for(int i=0;i<5;i++)
	{
		if(*ptr==S_I)
		{
			return true;
		}
		(ptr)++;
	}
}


int main()
{
	int a[5];
	int *pt;
	int max=0;
	int num;
        int sum=0;
	
	pt=a;
	
	// Input for the array
	for(int i =0;i<5;i++)
	{
		cout<<"Enter a number for the array: ";
		cin>>*pt;
		(pt)++;
	}
	
	cout<<endl;
	cout<<"Outputting the array"<<endl;
	
	pt=a;
	
	//outputting for the array
	
   for(int i =0;i<5;i++)
	{
		cout<<*pt<<"\t";
		(pt)++;
		
	}
	
	cout<<endl;
	
	//Finding maximum value in the array
	pt=a;
	
	for(int i=0;i<5;i++)
	{
		if(*pt>max)
		{
			max=*pt;
		}
		(pt)++;
	}
	cout<<"Max value: "<<max<<endl;
	
	cout<<endl;
	//Searchng the value from the array
	
	cout<<"Enter a value to be searched: ";
	cin>>num;
	
	if(Search_value(pt,num,a)==true)
	{
		cout<<num<<" is there"<<endl;
	}
	else
	{
		cout<<num<<" is NOT there"<<endl;
	}
	pt=a;
       //Average of array
    for(int i=0;i<5;i++)
    {
    	sum+=*pt;
    	(pt)++;
    }
	cout<<"Average: "<<sum/5<<endl;
   
	
	system("pause");
}