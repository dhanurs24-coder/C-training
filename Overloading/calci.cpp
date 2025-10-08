#include<iostream>
using namespace std;

class calculator{
    public:
    int calci(int a,int b){
        return a+b;
    }
    int calci(int a,float b){
        return a-b;
    }
    int calci(int a,int b,int c){
        return a*b*c;
    }
};


int main(){
    calculator obj;
    cout<< obj.calci(1,2)<<"\n";
    cout<<obj.calci(2,7.90f)<<"\n";
    cout<<obj.calci(7,6,4)<<"\n";
}