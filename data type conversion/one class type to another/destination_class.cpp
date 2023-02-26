//destination class
#include<iostream>
#include<math.h>
using namespace std;
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
        float getr(){
            return r;
        }
        float gett(){
            return theta;
        }
};
class rectangle{
    float xco , yco ;
    public:
        rectangle(){
            xco = 0;yco = 0;
        }
        rectangle(polar p){
            float r,a;
            r = p.getr();
            a = p.gett();
            xco = r * cos(a);
            yco = r * sin(a);
        }
        void display(){
            cout<<"x = "<<xco<<"y = "<<yco<<endl;
        }
};

int main()
{
	rectangle r;
    polar p(70.0,0.79);
    r = p;  //calls line 31
	cout<<"The values in  polar coordinate is ";
	p.display();
	cout<<"\n The values in rectangular coordinate is ";
	r.display();
	return 0;
}