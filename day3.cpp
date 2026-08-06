#include <iostream>
#include <vector>
using namespace std;


// //array form
// int main(){
//     int arr[] = {2,7,11,19};
//     int target = 18;
//     int sz = 4;
//     for(int i=0;i < sz;i++){
//         for(int j =i+1;j<sz;j++){
//             if(arr[i]+arr[j] == target){
//                 cout<< arr[i]<< "," << arr[j];
//             }
//         }
//     }

// }

// //vector form

// int vec(){
//     vector<int> nums = {2,7,11,15};
//     vector<int> ans;
//     int target = 13;
//     int n = nums.size();

//     for(int i =0;i<n;i++){
//         for(int j =i+1;j<n;j++){
//             if(nums[i]+nums[j] == target){
//                 ans.push_back(nums[i]);
//                 ans.push_back(nums[j]);
                
//             }
//         }
//     }
//     cout << ans[0]<<","<< ans[1];
// }


// int main(){
//     int arr[] = {2,7,11,15};
//     int target = 13, sz=4, st=0, end = sz-1;
    
//     while(st< end){
//         if(arr[st] +arr[end] > target){
//             end--;
//         }else if(arr[st]+arr[end]<target){
//             st++;
//         }else{
//             cout << arr[st]<<','<< arr[end];
//             break;
//         }
//     }
//     // return 0;
// }

