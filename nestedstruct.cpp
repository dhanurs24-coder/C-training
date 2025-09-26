#include<iostream>
using namespace std;

struct Address{
    string city;
    int pincode;
};

struct student{
    int roll;
    string name;
    Address addr;
};

int main(){
    student s1;
    s1.roll = 1;
    s1.name = "dhnau";
    s1.addr.city="Chitradurga";
    s1.addr.pincode=577522;

    cout<<s1.name<<" 
    lives in "<<s1.addr.city<<" - "<<s1.addr.pincode<<endl;

    return 0;
}