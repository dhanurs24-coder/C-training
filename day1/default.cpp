#include<iostream>
using namespace std;

class book{
    public:
    string title;
    string author;
    int price;
    book(){
        title = "unknown";
        author = "unknown";
        price = 0;
    }
    book(string title,string author,int p){
        this->title = title;
        this->author = author;
        this->price = p;
    }


    void display(){
        cout<<" Title: "<<title<<" Author: "<<author<<" price: "<<price<<endl;
    }

};

int main(){
    book obj;
    obj.display();//default constructor

    book obj1("story","dhanu",200);
    obj1.display(); //Parameterized constructor
    return 0;
}