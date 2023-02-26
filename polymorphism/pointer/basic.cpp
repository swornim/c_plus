#include<iostream>
#include<string.h>
using namespace std;
class base{
    char name[20];
    int roll;
    public:
    void set(char n[20],int r){
        strcpy(name,n);
        roll = r;
    }
    void display(){
        cout<<"name = "<<name<<endl;
        cout<<"roll = "<<roll<<endl;
    }
};
int main(){
    base b1;
    base *btr;
    btr = &b1;
    btr -> set("swornim",10);
    btr ->display();

    
}