#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> mp;
    
    //Insert values;
    mp["apple"]=3;
    mp["banana"]=5;
    mp["orange"]=2;

    //Access value by key
    cout<<"apple count:"<<mp["apple"]<<endl;

    //upadte
    mp["apple"]++;

    //search key
    if(mp.find("banana")!=mp.end())
        cout<<"banana found\n";
    else
        cout<<"banana not found\n";

        //Erase
    mp.erase("orange");

    //Traverse all key-value pairs
    for(auto &p:mp){
        cout<<p.first<<"->"<<p.second<<endl;

    }

    return 0;
}