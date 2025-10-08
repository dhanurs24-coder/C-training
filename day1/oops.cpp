#include<iostream>
using namespace std;

class animal{
    public:
    void cat(){
        cout<<"animal is eating \n";
    }
};
class dog:public animal{
    public:
    void sound(string m){
        cout<<m;
    }
};

int main(){
    string m;
    cout<<"Enter the message";
    getline(cin,m);                
    
    //cin>>m;
    dog oj;
    oj.cat();
    oj.sound(m);
    return 0;
}