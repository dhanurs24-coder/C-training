#include<iostream>
using namespace std;

struct student{
    int roll;
    string name;
    float marks;

};

int main(){
    student s[3];

    for(int i=0;i<3;i++){
        cout<<"Enter roll,name,marks for student"<<i+1<<":";
        cin>>s[i].roll>>s[i].name>>s[i].marks;
    }
    cout<<"Student records:\n";
    for(int i=0;i<3;i++){
        cout<<s[i].roll<<" "<<s[i].name<<" "<<s[i].marks<<endl;
    }

    return 0;

}