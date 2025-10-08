#include<iostream>
using namespace std;

class area{
    public:
    int circle(int r){
        float RC=3.142*r*r;
        return RC;
    }
};
class rectangle{
    public:
    int rect(int l,int b){
        int RR=l*b;
        return RR;
    }
};

class triangle{
    public:
    float tri(int h,int b){
        float RT= 0.5*h*b;
        return RT;
    }
};

int main(){
        area o;
        cout<<o.circle(4)<<"\n";
        rectangle o1;
        cout<<o1.rect(2,3)<<"\n";
        triangle o2;
        cout<<o2.tri(3,4)<<"\n";
        return 0;

}