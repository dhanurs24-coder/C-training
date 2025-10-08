//Find the missing Element from the array arr={1,2,4,5} using binarySearch

#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l = 0, h =n-1;
    int start = arr[0];
    int missing=0;
    while (l<=h){
        int mid=(l+h)/2;
        int expected = start+mid;
        if(arr[mid]!=expected){
            if(mid==0||arr[mid-1]==start+mid-1){
                missing=expected;
                break;
            }
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<"missing element:"<<missing<<endl;
    return 0;
}