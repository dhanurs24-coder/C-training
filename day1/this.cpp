#include<iostream>
using namespace std;
class abc{
    public:
    int a,b/mh;
    abc(int a,int b){
        this->a=a;
        this->b=b;
    }
    void add(){
        cout<<a+b;
    }
};
int main(){
    abc ab(5,8);
    ab.add();
    return 0;
}