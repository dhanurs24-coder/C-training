#include<iostream>
using namespace std;
class abc{
    public:
    abc(int a,int b){
        cout<<a+b;
    }
};
int main(){
    abc ab(8,9);
    return 0;
}