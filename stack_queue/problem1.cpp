//STACK -> Linear data structure which follows LIFO(Last In First Out) order
//Basic operations -> push,pop,top, isEmpty
//Implementation -> Array,Linked List

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;                 //syntax to create a stack using STL
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(20);
    s.push(70);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"size of stack is :";
    cout<<s.size();
    return 0;


}
