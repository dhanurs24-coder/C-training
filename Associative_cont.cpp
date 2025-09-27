#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Mango";

    for (auto &p:m){
        cout<<p.first<<" -> "<<p.second<<endl;

    }
    
}