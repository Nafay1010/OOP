#include<iostream>
using namespace std;
int main()
{
	int arr[15];
	int count=0;
	int max=0;
	int num;
	//input
	for(int i=0;i<15;i++)
	{
		cout<<"Enter a number: ";
		cin>>arr[i];
		if(arr[i]>10)
		{
		cout<<"Enter the number again (IT SHOULD BE LESS THEN 10): ";
		while(arr[i]<10)
		{
		cin>>arr[i];
		}
		i--;
		}
	}
		
	for(int i=0;i<15;i++)
	{
		for(int j=i;j<15;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>max)
		{
			max=count;
			num=arr[i];
		}
		count=0;
	}
	cout<<"Maximum occurenced number is "<<num<<" which has "<<max<<" repetition"<<endl;
}