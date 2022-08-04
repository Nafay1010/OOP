#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>

using namespace std;

void vowel(string word)
{
	int flag=0;
	for(int i=0;i<word.size();i++)
	{
		switch(word[i])
		{
			case 'a':
				{
					cout<<"a"<<endl;
					flag++;
					break;
				}
				
			case 'e':
				{
					cout<<"e"<<endl;
					flag++;
					break;
				}
			case 'i':
				{
					cout<<"i"<<endl;
					flag++;
					break;
				}
			case 'o':
				{
					cout<<"o"<<endl;
					flag++;
					break;
				}
			case 'u':
				{
					cout<<"u"<<endl;
					flag++;
					break;
				}
		}
	}
	cout<<"The total number of vowels are: "<<flag<<endl;
}


int main()
{
	string word;
	cout<<"Enter word ";
	cin>>word;
	
	vowel(word);
}