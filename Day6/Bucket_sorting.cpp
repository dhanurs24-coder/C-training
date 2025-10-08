#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucketSort(vector<int> &arr){
    int n=arr.size();

//Find the Maxmium element
    int maxVal=*max_element(arr.begin(),arr.end());

//create buckets
    int bucketCount=n;
    vector<vector<int>> buckets(bucketCount);

//Distribute elements into buckets
    for (int i=0;i<n;i++){
        int index=(arr[i]*bucketCount)/(maxVal+1);
        buckets[index].push_back(arr[i]);
    }

//Sort each buckets
    for (int i = 0;i < bucketCount;i++)
        sort(buckets[i].begin(),buckets[i].end());

//concatenate all buckets
    int idx = 0;
    for (int i = 0;i < bucketCount;i++)
        for (int num:buckets[i])
            arr[idx++]=num;

    
}

int main(){
    vector<int> arr = {42,32,33,52,37,47,51};

    bucketSort(arr);

    cout<<"Sorted array:";
    for (int x:arr)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}
