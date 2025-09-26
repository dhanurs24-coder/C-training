#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={10,20,30};

    v.push_back(40);  //add elements
    v.push_back(50);

    cout<<"Vector elements";
    for (int x:v) cout<<x<<" ";

    cout<<"\n size: "<<v.size();
    return 0;
}
