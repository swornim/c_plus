//wap to convert meter value into object of a class 
#include<iostream>
using namespace std;
const float mtf = 3.280;
class distanc{
    int feet;
    int inch;
    public:
    distanc(){
        feet = 0;
        inch = 0;
    }
    distanc(float m){
        float total_feet = mtf * m;
        feet = int(total_feet);
        inch = 12 * (total_feet - feet);//12.5 feet = 12 feet 6 inch
    }
    void display(){
        cout<<feet<<"."<<inch<<" ";
    }
};
int main(){
    distanc dist;
    float meter;
    cout<<"enter distance in meter: ";
    cin>>meter;
    dist = meter;
    dist.display();
}