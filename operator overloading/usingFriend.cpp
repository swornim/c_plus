#include<iostream>
using namespace std;
class coordinate{
    int x;
    int y;
    public:
        void get_data(int a, int b){
            x = a;
            y = b;
        }
        void display(){
            cout<<x<<" "<<y<<" "<<endl;
        }
        friend void operator -(coordinate &);
};
void operator -(coordinate &s){
    s.x = -s.x;
    s.y = -s.y;
}
int main(){
    coordinate s1,s2;
    s1.get_data(4,5);
    -s1;
    s1.display();
}