//find kth largest element using priority queue input arr= [3,1,5,12,2,11], k=3, output = 12,11,5
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void Klargest(vector<int>&arr,int k){
    priority_queue<int,vector<int>,greater<int>> pq;  //min heap

    for(int num:arr){
        pq.push(num);
        if(pq.size()>k){
            pq.pop();
        }
    }

        cout<<k <<" largest elements are: ";
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }


    }
int main(){
    vector<int> arr={3,1,5,12,2,11};
    int k=3;
    Klargest(arr,k);
    return 0;
}
