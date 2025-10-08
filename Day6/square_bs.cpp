#include<iostream>
using namespace std;
int SquareSearch(int n){
        int start=0,end=n;
        int ans=-1;
        while(strat<=end){
            int mid=(start+(end-start))/2;
            int sq=mid*mid;

            if (sq==n)
                return mid;
            else if (sq<n)
                ans=mid;
                strat=mid+1;
            else
                end=mid+1;
       
        }
         return 0;

 }
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    int result=SquareSearch(n);
    cout<<"square root(integer part)="<<result<<endl;

    return 0;

}

