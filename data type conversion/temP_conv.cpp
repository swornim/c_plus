//wap to convert fahrenheit to celciusby passing single argument
//to constructor
// f = ((C * 9.0) / 5.0 ) + 32
#include<iostream>
using namespace std;
class tempe{
    float f;
    int c;
    public:
    tempe(){
        f = 0;
    }
    tempe(float a){
        f = (a-32)*5/9;
    }
    void display(){
        cout<<"temp in celcius = "<<f;
    }
};
int main(){
    tempe t;
    float tem_c;
    cin>>tem_c;
    t = tem_c;
    t.display();
    return 0;
}