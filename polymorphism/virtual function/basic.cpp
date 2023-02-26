#include<iostream>
using namespace std;
class base{
    public:
        virtual void show(){
            cout<<"\n derived class display:";
        }
};
class derived:public base{
    public:
        void show(){
            cout<<"\n from base class \n";
        }
};
int main(){
    base *btpr,b1;
    btpr = &b1;
    
    btpr -> show();
    

    derived d1;
    btpr = &d1;

    btpr -> show();

    return 0;
}