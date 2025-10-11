#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left]>arr[largest])
        largest = left;
    if (right < n && arr[right] > arr [ largest])
        largest = right;
    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}


void heapSort(int arr[],int n){
    //Step1: Build Max heap
    for (int i =n/2-1; i>= 0; i--){
        heapify(arr,n,i);
    }
}

int main(){
    int arr[] = {4,10,3,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr,n);

    cout<<" Sorted array: ";
    for (int i=0;i<n;i++)
        cout<<arr[i] << " ";
    cout<<endl;
    
    return 0;
}