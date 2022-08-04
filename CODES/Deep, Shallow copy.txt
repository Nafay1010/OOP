#include <iostream>
using namespace std;

//****Shallow copy and deep copy*****
//class justme{
//	
//	private:
//		int val;
//		int *ptr;
//	public:
//		justme()
//		{
//			val=0;
//			ptr= new int [5];
//		}
		
//Copy Constructor

//		justme(const justme& a)
//		{
//			val=a.val;
//			ptr=new int [5];
//			for (int i=0; i<5; i++)
//			{
//				ptr[i]=a.ptr[i];
//			}
//		}
//		
//		void set(int v)
//		{
//			val=v;
//			
//			for (int i=0; i<5; i++)
//			{
//				ptr[i]=i*i;
//			}
//		}
//		
//		void setVal(int i, int val)
//		{
//			ptr[i]=val;
//		}
//		
//		void get()
//		{
//			cout<<"Value: "<<val<<endl;
//			cout<<"Array: ";
//			for (int i=0; i<5; i++)
//			{
//				cout<<ptr[i]<<" ";
//			}
//			cout<<endl;
//		}
//		~justme()
//		{
//			delete [] ptr;
//		}
//};
//int main()
//{
//	justme j1;
//	j1.set(20);

	
//***** shallow copy *******
//	justme j2=j1;
//	cout<<"Shallow copy: "<<endl;
//	cout<<"Before \nJ1: "<<endl;
//	j1.get();
//	cout<<"J2: "<<endl;
//	j2.get();
//	
//	j2.setVal(0,10);
//	
//	cout<<"After \nJ1: "<<endl;
//	j1.get();
//	cout<<"J2: "<<endl;
//	j2.get();

//***** deep copy ******
//	justme j2(j1);
//	j2.setVal(0,18);
//	j1.get();
//	j2.get();
//
//	return 0;
//}




