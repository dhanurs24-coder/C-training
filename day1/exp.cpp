#include<iostream>
using namespace std;
int main(){
int  a=4;
int *p=&a;
int **pp=&p;

cout<<&a<<endl;
cout<<p<<endl;
cout<<*p<<endl;
cout<<**pp<<endl;
cout<<&p<<endl;
}