#include<iostream>
using namespace std;
class A{
    int x;
    int y;
    int sum = 0;
    public:
        A(){

        }
        A(int a, int b){
            x = a;
            y = b;
        }
        A operator +(A a){
            x = a.x + x;
            return A(x,y);
        }
        void display(){
            cout<<"sum = "<<x;
        }
};
int main(){
    A a1(3,6),a2(4,6),a3;
    a3 = a1+a2;
    a3.display();

}