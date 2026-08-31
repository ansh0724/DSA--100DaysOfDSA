#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};
    int n = arr.size();
    // vector<vector<int>> ans;
    set<vector<int>> uniTrip;

    for(int i=0;i<n;i++){
        int tar = -arr[i];
        set<int> s;

        for(int j = i+1; j<n;j++){
            int third = tar - arr[j];

            if(s.find(third) != s.end()){
                vector<int> trip = {arr[i],arr[j],third};
                sort(trip.begin(),trip.end());
                uniTrip.insert(trip);
            }
            s.insert(arr[j]);
        }

    }
    vector<vector<int>> ans(uniTrip.begin(), uniTrip.end());

    for (const auto& triplet : ans) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }
}