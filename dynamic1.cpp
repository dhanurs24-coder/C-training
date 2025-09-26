#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int *arr = new int[n];
    cout<<"enter"<<n<<"value";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"you entered";
    for(int i=0;i<n;i++){
        cout<<arr[i];

    }
    delete[] arr;
    return 0;
}