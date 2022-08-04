#include<iostream>
#include<cmath>
#include"conio.h"
#include<string>

using namespace std;


int guess(char letter, string word)
{
	if(letter!='0')
	{
	
	int T=0;
	for(int i = 0 ; i<word.size() ; i++)
	{
		if(letter==word[i])
			T++;
	}
	if(T==0)
	cout<<"There are 0 "<<letter<<"'s."<<endl;
	else
	cout<<"There are "<<T<<" "<<letter<<"'s."<<endl;
}
}

int main()
{
	string word;
	char alphabet;
	cout<<"Write a word: ";
	cin>>word;
	cout<<"The word contains "<<word.size()<<" letters"<<endl;
do
	{
	
	cout<<"What letter would you like to guess? (Enter zero to quit) ";
	cin>>alphabet;
	guess(alphabet,word);
}
    while(alphabet!='0');

}