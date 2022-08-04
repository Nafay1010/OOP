#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string str[5];
	double val[5];
    int sum=0;
    int max=0;
    int index;

	for(int j=0;j<5;j++)
		{
		cout<<"Enter name: ";
		cin>>str[j];
		cout<<"Enter votes: ";
		cin>>val[j];
	    }
	    cout<<endl;
	    cout<<"Candidates"<<"\t"<<"Voted recieved"<<"\t"<<"\t"<<"% of Total votes"<<endl;
	    cout<<endl;
	    //finding sum
	for(int i=0;i<5;i++)
	{
		sum+=val[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<str[i]<<"\t"<<"\t"<<val[i]<<"\t"<<"\t"<<"\t"<<(val[i]/sum)*100<<endl;
	}
	cout<<"Total "<<"\t"<<"\t"<<sum<<endl;
	
	for(int i=0;i<5;i++)
	{
		if(val[i]>max)
		max=val[i];
	}
	//finding index
	for(int j=0;j<5;j++)
	{
		if(max==val[j])
		index=j;
	}
	
	cout<<"The winner of the Election is "<<str[index]<<endl;
	
	
	

}