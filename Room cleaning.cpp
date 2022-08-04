#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>

using namespace std;

float cost(float L, float W)
{
	int S_F,S_S;
	float cost;
	S_F=L*W;
	S_S=10*12;
	if(S_F <= S_S)
	{
		cost=39;
		return cost;
	}
	else
	{
	cost=39+((S_F-S_S)*0.25);
	return cost;
}
}

int main()
{
	float total =0,length,width;
	float c=0;
		int room;
		cout<<"Enter the number of rooms to be cleaned: ";
	cin>>room;
	for(int i=1;i<=room;i++)
	{
		cout<<"Enter the width and length of room "<<i<<": ";
		cin >> width >> length;
		c=cost(length,width);
		cout<<"The cost to clean room "<<i<<": "<<c<<endl;
	total=total+c;
	}	
		cout<<"The total cost of cleaning "<<room<<" room(s): "<<total<<endl;
}