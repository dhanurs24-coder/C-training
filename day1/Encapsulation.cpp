#include<iostream>
using namespace std;
class abc{
    private:
        string name;
        int rollNo;

    public: //Public method to accsess the data
    //Setter methods
    void setName(string n){
        name=n;
    }

void setRollNo(int r){
    rollNo=r;
}
    
    string getName(){
        return rollNo;
    }
};

int main(){
    abc s();
    s.setName("Dhanu");
    s.setRollNo(18);

    cout<<"Name:" <<s.getName()<<endl;
    cout<<" Roll No:"<<s.getRollNo()<<endl;

    return 0;
}