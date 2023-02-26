//derived class |  public  |  private      | protected |
//_____________________________________________________| 
//public        : public   | not accessible | protected|
//private       : private  | not accessible | private  | 
//protected     : protected| not accessible | protected|
#include<iostream>
using namespace std;
class area{
    protected:
        float w;
        float h;
    public:
        void get(float x,float y){
            w = x;
            h = y;
        }
};
class triangle:public area{
    public:
    float a(){
        return (0.5 * w * h);
    }
};
class rectangle:public area{
    public:
    int a(){
        return( w* h);
    }
};
int main(){
    rectangle r;
    triangle t;
    r.get(5,6);
    t.get(5,5);
    cout<<"the area of rectangle is = "<<r.a()<<endl;
    cout<<"the area of triangle is = "<<t.a()<<endl;
}