#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> dl;
    list<int> dl2;

    dl.push_back(10);
    dl.push_back(20);
    dl.push_front(23);

    auto it = dl.begin();          //auto=Don't need to specify th value
    advance(it,1);
    dl.insert(it,15);
    
    for (int val : dl) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}