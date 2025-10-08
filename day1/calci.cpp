#include<iostream>
using namespace std;
class abc{
    public:
    void add(int a,int b){
        cout<<a+b;
    }
};
int main(){
    abc ab;
    ab.add(1,2);
    return 0;
}