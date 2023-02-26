#include<iostream>
using namespace std;
class add{
    int weight;
    public:
    add(int x = 0){
        weight = x;
    }
    void display(){
        cout<<"the weight is = "<<weight<<endl;
    }
    add operator+(add w){
        add t;
        t.weight = weight + w.weight;
        return t;
    }
    
};
int main(){
    add person1(78);
    add person2(22);
    add total;
    total = person1 + person2;
    total.display();
}