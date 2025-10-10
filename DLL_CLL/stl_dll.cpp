#include<iostream>
#include<list>
using namespace std; 

int main(){
    list<int> dll; // doubly linked list
    dll.push_back(10);
    dll.push_back(20);
    dll.push_back(30);

    dll.push_front(5);
    dll.push_front(3);
    cout<<"list after insertion"<<endl;
    for(int val : dll){
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    dll.pop_front();
    cout<<"after deleting from beginning"<<endl;
    for(int val : dll){
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    dll.pop_back();
    cout<<"after deleting from end"<<endl;
    for(int val : dll){
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    return 0;

}
