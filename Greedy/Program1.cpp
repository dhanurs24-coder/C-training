#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Activity{
    public:
    int start , end ;
};
bool compare(Activity a, Activity b){
    return a.end < b.end;
}
void ActivitySelection(vector<Activity> &ac){

    //step1: Sort by end time
    sort (ac.begin(),ac.end(),compare);

    cout<<"Selected Activities (start,end):\n";

    //step2: Always select the first Activity
    int lastEnd = ac[0].end;
    cout<<"(" << ac[0].start << ","<< ac[0].end<<")\n";

    //step3: Iterate through remaining activities
    for (int i=1;i<ac.size();i++){
        if (ac[i].start >= lastEnd){
            cout<<"("<<ac[i].start<<","<< ac[i].end<<")\n";
            lastEnd = ac[i].end;
        }
    }


}
int main(){
    vector<Activity> ac = {
        {5,9},{1,2},{3,4},{0,6},{5,7},{8,9}
    };

    ActivitySelection(ac);
    return 0;
    }
