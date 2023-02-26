#include<iostream>
using namespace std;
class base{
    int num;
    public:
        void readData(){
            cout<<"enter the base number";
            cin>>num;
        }
        void display(){
            cout<<"the base number is = "<<num<<endl;
        }
};
class derived:public base{
    int num;
    public:
        void readData(){
            cout<<"enter the derived number";
            cin>>num;
        }
        void display(){
            cout<<"the derived number is = "<<num;
        }
};
int main(){
    derived d1;
    d1.base::readData();
    d1.readData();
    d1.base::display();
    d1.display();
}