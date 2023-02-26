// #include<iostream>
// using namespace std;

// class base{
//     public:
//         virtual void print(){
//             cout<<"this is the base class print funciton"<<endl;
//         }
//         virtual void display(){
//             cout<<"this is the base class display funtion"<<endl;
//         }
// };
// class derived: public base{
//     void print(){
//         cout<<"this is the derived class print fucntion"<<endl;
//     }
//     void display(){
//         cout<<"this is the derived class display function"<<endl;
//     }
// };
// int main(){
//     base *baseptr;//Run time poylmorphism can only be achived through pointer(or refrence) of a base class
//     derived d;
//     baseptr = &d;

//     baseptr -> print();
//     baseptr ->display();
// }
#include<iostream>
using namespace std;
class cp{
    protected:
        int width, height;
    public:
        void set_values(int a, int b){
            width = a;
            height = b;
        }
        virtual int area(){
            return 0;
        }
};
class crect:public cp{
    public:
    int area(){
        return(width*height);}
};
class ctr:public cp{
    public:
    int area(){
        return(width*height /2);
    }
};
int main(){
    crect r;
    ctr t;
    cp p;
    cp *cpr[] = {&p,&t,&r};
    for(int j = 0; j < 3;j++){
        cpr[j] -> set_values(4,5);
    }
    cout<<"figure drawn by base pointer are:"<<endl;
    for(int i = 0; i <3;i++){
        cout<<cpr[i] -> area()<<endl;
    }
}