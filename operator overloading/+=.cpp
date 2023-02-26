#include<iostream>
using namespace std;
class a{
    int b;
    public:
    a(){

    }
    a(int x){
        b = x;
    }
    void operator ++(){
        b = b + c.b;
    }
    void display(){
        cout<<"value of x = "<<b;
    }
};
int main(){
    a a1(5),a2(4),a3;
    a1+=5;
    a1.display();

}
