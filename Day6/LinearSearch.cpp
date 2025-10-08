#include<iostream>
using namespace std;

class linearSearch{
    public:
    int leS(int arr[],int key){
        for(int i=0;i<5;i++){
            if(arr[i]==key){
                return i;
            }
        }
}
};

int main(){
    int arr[]={1,2,3,5,6};
    linearSearch l;
    cout<<"Index value at:"<<l.leS(arr,5);
    return 0;
}