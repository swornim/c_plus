//source class
#include<iostream>
#include<math.h>
using namespace std;
class rectangle{
    float xco , yco ;
    public:
        rectangle(){
            xco = 0;yco = 0;
        }
        rectangle(float x,float y){
            xco = x;yco = y;
        }
        void display(){
            cout<<"x = "<<xco<<"y = "<<yco<<endl;
        }
};
class polar{
    float r,theta;
    public:
        polar(){
            r = 0 ; theta = 0;
        }
        polar(float x,float y){
            r =x; theta = y;
        }
        void display(){
            cout<<"r = "<<r<<"theta ="<<theta;
        }
        operator rectangle(){ //casting operator function
            float x,y;
            x = r * cos(theta);
            y = r * sin(theta);
            return rectangle(x,y) ;  //temporary object
        }
};
int main()
{
	rectangle r;
    polar p(70.0,0.79);
	r=p;
	cout<<"The values in  polar coordinate is\n ";
	p.display();
	cout<<"\n The values in rectangular coordinate is\n";
	r.display();
	return 0;
}