#include<iostream>
using namespace std;

class student{
    public:
    student(){
      cout<<"female student\n";
    }
};
class person:public student{
    public:
    person(){
      cout<<"Women\n";
    }
};
class Teacher:public person{
    public:
        Teacher(){}
    void display(){
      cout<<"Female Teacher\n";
    }
};
class TeachingAssistant:public Teacher,public student{
    public:
         TeachingAssistant(){}
    void display(){
      cout<<"teacher and student\n";
    }
};

int main(){
    Teacher obj;
    obj.display();
    TeachingAssistant obj1;
    obj1.display();
    return 0;


}