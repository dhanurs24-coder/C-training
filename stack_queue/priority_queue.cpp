#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> queue;

    priority_queue<int> pq;  //max heap
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(15);
    pq.push(30);
    pq.push(25);
    pq.push(40);
    
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}