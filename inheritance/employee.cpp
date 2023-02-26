#include<iostream>
using namespace std;
class Employee
{
	private:
		char name[20];
		float salary;
		public:
			void input()
			{
				cout<<"\n Enter name : ";
				cin.getline(name,20);
				cout<<"\nEnter salary : ";
				cin>>salary;
			}
			void display()
			{
				cout<<"\nName : "<<name;
				cout<<"\nBasic salary : "<<salary;
			}
};
class Manager:public Employee
{
	protected :
		char title[20];
		public:
			void input()
			{
				Employee::input();
				cout<<"\nEnter title : ";
				cin>>title;
            }
			void display()
			{
				Employee::display();
				cout<<"\nTitle : "<<title;		
			}
};
int main()
{
	Manager M1;
	cout<<"\nManager 1";
	M1.input();
	cout<<"\nManager 1 Details";
	M1.display();
	return 0;
}