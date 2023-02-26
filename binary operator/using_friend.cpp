//wap to overload plus operator 
#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public:
        complex(){
            real = 0;
            imag = 0;
        }
        complex(int x,int y){
            real = x;
            imag = y;
        }
};
