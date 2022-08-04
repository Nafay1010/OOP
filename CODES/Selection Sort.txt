#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int min;
	int temp;
	//input for the array
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the number for the array: ";
		cin>>arr[i];
	}
	//output for unsorted array
	cout<<"Unsorted array"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	//Putting in order
	for(int i=0;i<5;i++)
	{
		for(int j=i;j<5;j++)
		{
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<endl;
	//Output the sorted array
	cout<<"Sorted array [Ascending Order] "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
}