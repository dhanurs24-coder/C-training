#include<iostream>
using namespace std;
class abc{
    public:
    int c,d;
    abc(int a,int b){  //Parameterized constructors
        c=a;
        d=b;
    }
    void add(){
        cout<<c+d;
    }
};
int main(){
    abc ab(1,2);
    ab.add();
    return 0;
}