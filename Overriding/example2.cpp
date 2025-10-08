#include<iostream>
using namespace std;

class circle{
    public:
 virtal int draw(){
       cout<<"draw the circle";

    }
};
class square:public circle
    public:
    int draw(){
        cout<<"draw the square";
    }
};

class triangle{
    public:
    int draw(){
        cout<<"draw the triangle";
    }
    
};

int main(){
   circle *c = new square; //c is the pointer of type circle new chlid is create the object of type square in heap memory so,heap point of square object 
   c->draw();


}