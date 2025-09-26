#include<iostream>
using namespace std;

union data{
    int i;
    float f;
    char ch;
};

int main(){
    data d;
    d.i = 10;
    cout<<"d.i="<<d.i<<endl;
    d.f=22.5;
    cout<<"d.f="<<d.f<<endl;
    d.ch='S';
    cout<<"d.ch="<<d.ch<<endl;
    cout<<"d.i="<<d.i<<endl;
    return 0;
}