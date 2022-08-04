#include <iostream>
using namespace std;

class course
{
float s1,s2,assign,quiz,final,total_marks;
public:
	course()
	{
		
	}
	
	course(float S1,float S2,float a,float q,float f)
	{
		s1=S1;
		s2=S2;
		assign=a;
		quiz=q;
		final=f;
		total_marks=s1+s2+assign+quiz+final;
	}
	
	void set(float S1,float S2,float a,float q,float f)
	{
		s1=S1;
		s2=S2;
		assign=a;
		quiz=q;
		final=f;
		total_marks=s1+s2+assign+quiz+final;
	}
	float total()
	{
		return total_marks;
	}
};



class student{
	private:
		string name,roll_no;
		int sem;
		int no_course;
		course C;
	public:
		student(string n,string r, int s,int no)
		{
		name=n;
		roll_no=r;
		sem=s;
		no_course=no;
	
		}
		void setMarks(float S1,float S2,float a,float q,float f)
		{
			C.set(S1, S2, a, q, f);
		}
		int getcourse()
		{
			return no_course;
		}
	void print()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll Number:	"<<roll_no<<endl;
		cout<<"Semester: "<<sem<<endl;
	}
	float showmarks()
	{
		return C.total();
	}		
};
int main()

{

	float s1,s2,a,q,f;
	
	student std1("abc","p126012",2,2);
	std1.print();
	for(int i=0;i<std1.getcourse();i++)
	{
		cout<<"Marks for "<<i+1<<" course"<<endl;
		cout<<"Sessional-1 : ";
		cin>>s1;
		cout<<"Sessional-2 : ";
		cin>>s2;
		cout<<"Assign : ";
		cin>>a;
		cout<<"Quizes: ";
		cin>>q;
		cout<<"Final: ";
		cin>>f;
		std1.setMarks(s1,s2,a,q,f);	
		cout<<"=====Total Marks course"<<i+1<<"==="<<endl;
		cout<<std1.showmarks();	
		cout<<endl;
		cout<<"==================================="<<endl;
	}
	
	return 0;
}