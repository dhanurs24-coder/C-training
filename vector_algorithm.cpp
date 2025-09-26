#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v(10,4);
    v.push_back(30);
    v.push_back(0);
    v.push_back(500);
    v.push_back(90);


    sort(v.begin(),v.end());  //ascending
    cout<<"Vector elements:\n";
    for (int x : v) cout<<x<<" ";

    sort(v.begin(),v.end(),greater<int>()); //descending

    cout<<"Vector elements:\n";
    for (int x : v) cout<<x<<" ";

    reverse(v.begin(),v.end());    //reverse

    cout<<"Vector elements:\n";
    for (int x : v) cout<<x<<" ";


    return 0;
}
