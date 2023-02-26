#include<iostream>
using namespace std;
class timet{
    private:
    int hr,min,sec;
    public:
    timet(){
        hr = 0;
        min = 0;
        sec= 0;
    }
    timet(int hr, int min, int sec){
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    timet operator+(const timet t){
        timet temp;
        temp.sec = min+t.sec;
        temp.min = min + t.min+temp.sec/60;
        temp.hr = hr+t.hr+temp.min/60;
        temp.sec%=60;
        temp.min%=60;
        return temp;
    }
    int operator<=(timet t){
        if(hr<t.hr){
            return true;
        }else if(hr = t.hr){
            if (min < t.min){
                return true;
            }else if(min = t.min){
                if (sec<t.sec){
                    return true;
                }else if(sec= t.sec){
                    return true;                                               
                }else {
                    return false;
                }
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
    friend istream& operator>>(istream&, timet&);
    friend ostream& operator<<(ostream&,const timet&);
};
istream& operator>>(istream& input, timet& t){
    cout<<"enter time(hr:min:sec)"<<endl;
    input>>t.hr>>t.min>>t.sec;
    return input;
}
ostream& operator<<(ostream& output,const timet& t){
    output<<t.hr<<':'<<t.min<<':'<<t.sec<<endl;
    return output;
}
int main(){
    timet t1, t2,t3;
    cin>>t1>>t2;
    cout<<t1<<t2;
    if(t1<=t2){
        cout<<"t2 is greater or equal"<<endl;
    }else{
        cout<<"t1 is greater or equal"<<endl;
    }
    t3 = t1+t2;
    cout<<t3;
    return 0;
}