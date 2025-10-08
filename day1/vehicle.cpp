#include<iostream>
using namespace std;

class vehicle{
    public:
    virtual void strat()=0;
};

class car:public vehicle{
    public:
    void strat(){
        cout<<"car is strating"<<endl;
    }
};

class bike:public vehicle{
    public:
    void strat(){
        cout<<"bike is strating"<<endl;
    }
};

int main(){
    vehicle *v1 = new car();
    vehicle *v2 = new bike();

    v1->strat();
    v2->strat();

    delete v1;
    delete v2;

    return 0;
}

