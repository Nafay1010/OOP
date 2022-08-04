#include<iostream>

using namespace std;

//part a
bool search_element(int n[2][2])
{
	int num;
	
	cout<<"Enter number to be searched: ";
	cin>>num;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(num==n[i][j])
			return true;
		}
	}
	return false;
}

//part b
void multiply(int n[2][2])
{
	int mult;
	cout<<"Enter the number to be multiplied with the array: ";
	cin>>mult;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<n[i][j]*mult<<"\t";
		}
		cout<<endl;
	}
}

//part c
void subtract(int n[2][2])
{
	int sub;
	cout<<"Enter the number to be subtracted with the array: ";
	cin>>sub;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<n[i][j]-sub<<"\t";
		}
		cout<<endl;
	}
}

//part d
void add(int n[2][2])
{
	int add;
	cout<<"Enter the number to be added with the array: ";
	cin>>add;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<n[i][j]+add<<"\t";
		}
		cout<<endl;
	}
}

//part e
bool compare(int a[2][2],int b[2][2])
{
	int F=0;
	int T=0;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(a[i][j]>b[i][j])
			F++;
			else
			T++;
		}
	}
	if(T>F)
	return true;
	else if(T==F)
	return false;
} 
int main()
{
    int a[2][2];
    int b[2][2];
    
	//input for the [a] array
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter a number for the [a] array at "<<"["<<i<<"]"<<"["<<j<<"]: ";
			cin>>a[i][j];
		}
    }
    
    //output for the [a] array
    
for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
    }
    //output for part a
    if(search_element(a)==true)
    cout<<"VALUE FOUND"<<endl;
    else
    cout<<"VALUE NOT FOUND"<<endl;
    multiply(a);
    subtract(a);
    add(a);
    
    //input for the [b] array
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter a number for the [b] array at "<<"["<<i<<"]"<<"["<<j<<"]: ";
			cin>>b[i][j];
		}
    }
    //output for the [b] array
for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
    }
    if(compare(a,b)==true)
    cout<<"array [a] is smaller then array [b]"<<endl;
    else
    cout<<"array [a] is greater then array [b]"<<endl;
	system("pause");
}