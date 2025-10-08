#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    int speed;
    car(string brand,int speed){
        this->brand = brand;
        this->speed=speed;
       
    }

    void display(){
         cout<<"brand: "<<brand<<"\n"<<"Speed:" <<speed<<endl;
    }
};

int main(){
    car car1("audi",120);
    car car2("BMW",120);
    car1.display();
    car2.display();

}