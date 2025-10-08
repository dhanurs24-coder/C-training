#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    char grade;
    student(string name,int age,char grade){
        this->name=name;
        this->age=age;
        this->grade=grade;
    }
    void display(){
        cout<<"name: "<<name<<" age: "<<age<<" grade: "<<grade<<endl;
    }
};

int main(){
    student st1("dhanu",19,'A');
    student st2("thanu",18,'A');
    st1.display();
    st2.display();

}