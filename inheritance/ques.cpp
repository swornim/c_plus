//Ambiguity in member in multiple inheritance
//make two base class base1 and base 2
//make same function name in both class
//make one derived class
//access the function specified in base 1 and base 2.
#include<iostream>
using namespace std;
class base1{
    protected:
     int x;
     public:
        void get(){
            cin>>x;

        }
};
class base2{
    protected:
        int y;
    public:
        void get(){
            cin>> y;
        }
};
class derived:public base1, base2{
    
}