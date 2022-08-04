#include <iostream>
using namespace std;

double convert_celsius(double F)
{
	double C;
	C=(F-32)*(0.556);
	return C;
}
double convert_fahrenheit(double C)
{
	double F;
	F=(C*1.8)+32;
	return F;
}
int main()
{
	double value;
	char ask;
	
	cout<<"Enter the value which is to be converted: ";
	cin>>value;
	cout<<"Do you want to convert this value to Fahrenheit OR Celsius [Enter 'F/C'] ";
	cin>>ask;
	
	if(ask=='c'||ask=='C')
	cout<<value<<" to celcius is "<<convert_celsius(value)<<"C"<<endl;
	
	else if(ask=='f'||ask=='F')
	cout<<value<<" to Fahrenheit is "<<convert_fahrenheit(value)<<"F"<<endl;	
}