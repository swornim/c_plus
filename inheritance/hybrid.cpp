#include<iostream>
using namespace std;
class student
{
	protected:
		char name[20];
		int roll;
		public:
			void input()
			{
				cout<<"\nEnter the Name : ";
				cin>>name;
				cout<<"\nEnter roll number : ";
				cin>>roll;	
			}	
			void putdata()
			{
				cout<<"\nName : "<<name;
				cout<<"\nRoll number : "<<roll;
			}
};
class test:public student
{
	protected:
		int sub1;
		int sub2;
	public:
		void input()
		{
			//student::input();//name, roll
			cout<<"\nEnter marks of subject1 : ";
            cin>>sub1;
			cout<<"\nEnter marks of subject2 : ";
			cin>>sub2;	
		}	
		void putdata()
		{
			student::putdata();//name,roll
			cout<<"\nMarks of subject1 : "<<sub1;
			cout<<"\nMarks of subject2 : "<<sub2;
		}
};
class sport
{
	protected:
		float score;
		public:
			void input_sport()
			{
				
				cout<<"\nEnter the sport score : ";
				cin>>score;	
			}	
			void put_sport()
			{
				
				cout<<"\nMarks of sport : "<<score;
			}
};
class result : public test,public sport
{
	protected:
		float total;
	public:
		void input()
		{
			//test::input();//name,roll,subject1,subject2
			//input_sport();//score
			total=sub1+sub2+score;//	
		}	
		void putdata()
		{
			test::putdata();//name,roll,subject1,subject2
			put_sport();//score
			cout<<"\nTotal : "<<total;//total marks
		}
};
int main()
{
	result r1;
	r1.student::input();
	r1.test::input();
	r1.input_sport();
	r1.input();
	r1.putdata();
	return 0;
}