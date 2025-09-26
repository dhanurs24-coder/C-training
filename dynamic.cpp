#include<iostream>
using namespace std;

int main(){
    int *p=new int;    //stored in heap

    *p=10;
    cout<<"value "<<*p<<endl;
    cout<<"Address: "<<p<<endl;

    delete p;

    cout<<"value "<<*p<<endl;
    cout<<"Address: "<<p<<endl;
    return 0;
}