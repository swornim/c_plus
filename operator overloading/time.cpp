#include<iostream>
using namespace std;
class Time
{
	public:
		int hour,minutes,second;
		void input()
		{
			cout<<"Enter hour, minutes and second for first and second time \n";
			cin>>hour>>minutes>>second;
		}
		void display()
		{
			cout<<"The final time after addition is : ";
			cout<<" "<<hour<<":"<<" "<<minutes<<":"<<" "<<second;
		}
		

	Time operator +(Time T)
	{
		Time t;
		t.second=second+T.second;
		t.minutes=minutes+T.minutes+second/60;
		t.second=second%60;
		t.hour=hour+T.hour+minutes/60;
		t.minutes=minutes%60;	
		return t;
	}
};


int main()
{
	Time T1,T2,T3;
	T1.input();
	T2.input();
	T3=T1+T2;//t3= t1.operator(t2);
	T3.display();
	return 0;
	
}