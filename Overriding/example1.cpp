#include<iostream>
using namspace std;

class person{
    public:
    void role(){
        cout<<"Call the role of the person";
    }
};
class student:public person{
    public:
    void role(){
        cout<<"Call the role of the student";
    }
};
class teacher:public person{
    public:
    void role(){
        cout<<"Call the role of the teacher";
    }
};

int main(){
    student ob;
    ob role();
    teacher ob1;
    ob1 role();
    return 0;
}