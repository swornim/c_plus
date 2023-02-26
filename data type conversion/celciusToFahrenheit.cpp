//wap to convert celsius into fahrenheit using conversion function(user-defined to basic data type)
// #include<iostream>
// using namespace std;
// class celcius{
//     float tempr;
//     public:
//         celcius(){
//             tempr = 0;
//         }
//         celcius(float t){
//             tempr  = t;
//         }
//         operator float(){
//             float f;
//             f = tempr*9/5 + 32;
//             return f;
//         }
// };
// int main(){
//     celcius c;  
//     float t;
//     cin>>t;
//     float x;
//     t = c;
//     cout<<"value in fahrenheit = "<<x;
// }
#include<iostream>
#include<math.h>

using namespace std;
class cla_celsius
{
    float xtempx;
	public:
	    cla_celsius()
	    {xtempx=0;}
    operator float()
    {
        float xfar;
        xfar=(9.0/5.0 *xtempx ) + 32;
        return (xfar);
    }
    void get_data(void)
    {
        cout<<"Enter your temperature in Cel: ";
        cin>>xtempx;
    }
};

int main()
{          
    float xfar;
    cla_celsius cel_dat;
    cel_dat.get_data();
    
    xfar=cel_dat;
    cout<<endl<<"The new temp in Fahrenheit is: "<<xfar<<endl;
}
