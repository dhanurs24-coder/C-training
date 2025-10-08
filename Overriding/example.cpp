#include<iostream>
using namespace std;

class parent{
    public:
    void display(){
        cout<<"call from the parent\n";
    }

};
class child:public parent{
    public:
    void display(){
        cout<<"call from the child\n";
    }
};

int main(){
    child ob;
    ob.display();  //overriding
    parent ob1;
    ob1.display();
    return 0;
}