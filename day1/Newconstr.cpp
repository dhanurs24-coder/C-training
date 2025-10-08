#include<iostream>
using namespace std;

class person{
    public:
    string name;
    person(string n) { name = n}

};

class student: public person{
    public:
    int rollNo;
    student(string n,int r):person(n) { rollNo=r;}
    void display(){
        cout<<"name" << name <<"RollNo"<<rollNo<<endl;
    }
};

int main(){
    
}