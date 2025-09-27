#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> v2d(3,vector<int> (4,0));
    v2d[0][1] = 5;
    for (auto row:v2d){
        for (auto val:row)
            cout<<val<<" ";
        cout<<endl;
    }
}