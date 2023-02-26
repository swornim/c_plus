#include <iostream>
using namespace std;
class complex {
    public:
  float real, imag;
  complex() { real = imag = 0.0; }
  friend istream& operator >>(istream &input, complex &c1)
   {
       cout<<" enter a complex number :"<<endl;
       input>>c1.real;
       input>>c1.imag;
       return input;
   }
    friend ostream& operator <<(ostream &output, complex c1){
       cout<<"the number is : "<<endl;
       output<<c1.real;
       cout<<" + ";
       output<<c1.imag;
       cout<<"i";
        return output;
   }
};
int main(){
    complex c1,c2;
    cin>>c1;
    cout<<c1;
}