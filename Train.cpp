//Find the number of paltform that that number train wait at halt station
//Arrial time and departure time [900,940,950,1100,1500,1800] & [910,1200,1120,1130,1900,2000]

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Train{
    public:
    int arrival;
    int departure;
    Train(int arrival,int departure){
        this->arrival=arrival;
        this->departure=departure;
    }
};
bool compare(Train t1, Train t2){
    return t1.arrival < t2.arrival;
}
int findPlatform(vector<Train> &trains){
    sort(trains.begin(),trains.end(),compare);
    int n = trains.size();
    vector<int> platform(n,1);
    int maxPlatform = 1;

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(trains[i].arrival <= trains[j].departure){
                platform[i] = max(platform[i],platform[j]+1);
            }
        }
        maxPlatform = max(maxPlatform,platform[i]);
    }
    return maxPlatform;
}
int main(){
    vector<Train> trains;
    trains.push_back(Train(900,910));
    trains.push_back(Train(940,1200));
    trains.push_back(Train(950,1120));
    trains.push_back(Train(1100,1130));
    trains.push_back(Train(1500,1900));
    trains.push_back(Train(1800,2000));

    cout<<"Minimum number of platforms required: "<<findPlatform(trains)<<endl;
    return 0;
}
