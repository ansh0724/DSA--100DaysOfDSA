#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
int main(){
    // vector<int> arr = {};
    // int n = arr.size();
    // // vector<vector<int>> ans;
    // set<vector<int>> uniTrip;

    // for(int i=0;i<n;i++){
    //     int tar = -arr[i];
    //     set<int> s;

    //     for(int j = i+1; j<n;j++){
    //         int third = tar - arr[j];

    //         if(s.find(third) != s.end()){
    //             vector<int> trip = {arr[i],arr[j],third};
    //             sort(trip.begin(),trip.end());
    //             uniTrip.insert(trip);
    //         }
    //         s.insert(arr[j]);
    //     }

    // }
    // vector<vector<int>> ans(uniTrip.begin(), uniTrip.end());

    // for (const auto& triplet : ans) {
    //     cout << "[ ";
    //     for (int num : triplet) {
    //         cout << num << " ";
    //     }
    //     cout << "]\n";
    // }

    // vector<int> arr = {2,7,11,15};
    // vector<int> ans;
    // int tar =9;
    // unordered_map<int,int> m;
    // for(int i=0;i < arr.size();i++){
    //     // int first = arr[i];
    //     int sec = tar-arr[i];
    //     if(m.find(sec) != m.end()){
    //         ans.push_back(i);
    //         ans.push_back(m[sec]);
    //         break;
    //     }
    //     m[arr[i]] = i;

    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<< ans[i]<<" ";
    // }

    vector<int> nums={-1,0,1,2,-1,-4};
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> s;
    for(int i =0;i<n;i++){
        for(int j= i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k] == 0){
                    vector<int> trip = {nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());

                    
                }
            }
        }
    }
}