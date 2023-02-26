//overload binary plus operator(+) to evaluate following expression B = 5 + A,
//wherr B and A are object of a class Distance having members feet and inch 
//and add inch

#include <iostream>
using namespace std;
class distanc{
    int feet;
    int inch;
    public:
        distanc(){
            feet = 0;
            inch = 0;
        }
        distanc(int x,int y){
            feet = x;
            inch = y;
        }
        distanc operator +(int n, distanc d){
            
        }
};