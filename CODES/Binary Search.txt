#include<iostream>
using namespace std;

int binary_search(int arr[],int F_V,int L_V,int num)
{
	int mid=(F_V+L_V)/2;
	if(num==arr[mid])
	return mid;
	else if(num<arr[mid])
	{
		return binary_search(arr,F_V,mid-1,num);
	}
	else if(num>arr[mid])
	{
		return binary_search(arr,mid,L_V,num);
	}
}
int main()
{
	int arr[5];
	int num;
	int a,b;
	//Input for the array
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the number for the array: ";
		cin>>arr[i];
	}
	cout<<endl;
	//Output for the array
		for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	a=arr[0];
	b=arr[4];
	cout<<endl;
	cout<<"Enter the value to be searched: ";
	cin>>num;
	
	cout<<num<<" is at Index "<<binary_search(arr,a,b,num)<<endl;
}