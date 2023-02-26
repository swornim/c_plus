#include<iostream>
using namespace std;
class b{
    public:
        virtual void display(){
            cout<<"c++ sucks"<<endl;
        }
};
class d:public b{
    int y;
    public:
        void display(){
            cout<<"i know bro T-T "<<endl;
        }
};
int main(){
    b base;
    d der;
    b *bptr = &base;
    bptr ->display();
    bptr = &der;
    bptr ->display();
}