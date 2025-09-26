#include<iostream>
using namespace std;
struct student{

    int roll;
    string name;
    float marks;
};

int main(){
    student s1;

    s1.roll=101;
    s1.name="dhanu";
    s1.marks=94.8;
    cout<<"ROLL NUMBER "<<s1.roll<<endl;
     cout<<"NAME "<<s1.name<<endl;
      cout<<"MARKS "<<s1.marks<<endl;

  return 0;
}