#include<iostream>
using namespace std;

class shape{
    public:
    virtual void draw()=0; //pure virtual function
};

class circle:public shape{
    public:
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};

class square:public shape{
    public:
    void draw(){
        cout<<"Drawing square"<<endl;
    }
};

int main(){
   shape *s1 = new circle();
   shape *s2 = new square();

   s1->draw();
   s2->draw();

   delete s1;
   delete s2;
   return 0;
}