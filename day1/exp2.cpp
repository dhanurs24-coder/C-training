// create a program that inheriit the properties without using :public calssName

#include<iostream>
using namespace std;

class animal{
    public:
    void display(){
        cout<<"It is animal"<<endl;
    }
};

class cat{
    public:
    animal a;
    void show(){
        a.display();
        cout<<"cat"<<endl;
        
    }
};

int main(){
    cat ob;
    ob.show();
    return 0;
}