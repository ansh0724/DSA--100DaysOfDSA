#include <iostream>
#include <vector>
#include <list>
using namespace std;

//Bubble sort
// int main(){
//     int arr[]={4,1,5,3,2};
//     int n= 5;
//     for(int i=0;i < n-1;i++){
//         for(int j=0;j < n-1;j++){
//             if(arr[j]< arr[j+1]){
    
//                 swap(arr[j],arr[j+1]);
//             }

//         }
//     }

//     for(int i =0;i< n;i++){
//         cout << arr[i]<<" ";
//     }
// }

//selection sort
// int main(){
//     int arr[]={4,1,5,3,2};
//     int n= 5;
//     for(int i=0;i < n-1;i++){
//         int minIdx =i;
//         for(int j = i+1;j < n;j++){
//             if(arr[j] < arr[minIdx]){
//                 minIdx =j;
//             }
//         }
//         swap(arr[i],arr[minIdx]);
//     }

//     for(int i =0;i< n;i++){
//         cout << arr[i]<<" ";
//     }
// }
//dnf algorithm
// int main(){
//     vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
//     int n = arr.size();
//     int low=0,mid=0,high=n-1;

//     while(mid <= high){
//         if(arr[mid] == 0){
//             swap(arr[mid],arr[low]);
//             low++, mid++;
//         }else if(arr[mid] == 1){
//             mid++;
//         }else{
//             swap(arr[mid],arr[high]);
//             high--;
//         }
//     }
//     for(int i =0;i< n;i++){
//         cout << arr[i]<<" ";
//     }

// }


//merge 2 sorted array

int main(){
    // int a[]={1,2,3,0,0,0};
    // int m= 3;
    // int b[]={2,5,6};
    // int n = 3;
    // int idx = m+n-1,i=m-1,j=n-1;
    // while(i >=0 && j>=0){
    //     if(a[i]>= b[j]){
    //         a[idx--] = a[i--];
    //     }else{
    //         a[idx--] = b[j--];
    //     }
    // }
    // while(j >=0){
    //     a[idx--] = b[j--];
    // }
    // for(int i =0;i< 6;i++){
    //     cout << a[i]<<" ";
    // }

    // vector<int> vec(3,10);
    // // vec.push_back(1);
    // // vec.push_back(2);
    // // vec.push_back(3);
    // // vec.push_back(4);
    // // vec.push_back(5);
    // // vec.push_back(6);
    // // vec.pop_back();
    
    // cout<< vec.size()<< endl;
    // cout<< vec.capacity()<< endl;
    // for(int val : vec){
    //     cout << val << " ";
    // }

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);

    for(int val: l){
        cout << val<<" ";
    }

}