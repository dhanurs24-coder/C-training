//Find the number of paltform that that number train wait at halt station
//Arrial time and departure time [900,940,950,1100,1500,1800] & [910,1200,1120,1130,1900,2000]

#include<iostream>
#include<algorithm>
using namespace std;
int findPlatform (int arr[],int dep[],int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int plat_needed = 0,result = 0;
    int i=0,j=0;

    while(i<n && j<n){
        if(arr[i] <= dep[j]){
           plat_needed++;
           result = max (result,plat_needed);
           i++;
    }
    else
    {
       plat_needed--;
        j++;
    }
}

    return result;
}

int main(){
    int arr[] = {900,940,950,1100,1500,1800};
    int dep[] = {910,1200,1120,1130,1900,2000};
    int n=6;

    cout<<"Minimum number of platform required: "<<findPlatform(arr,dep,n);
    return 0;
}
