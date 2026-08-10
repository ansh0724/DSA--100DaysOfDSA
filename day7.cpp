#include <iostream>
using namespace std;
int main(){
    int arr[] ={-1,0,3,5,9,12};
    int sz = 6;
    int target = 9;
    int idx=0;
    int st=0,end=sz-1;
    while(st <= end){
        int mid=(st+end)/2;
        if(target > arr[mid]){
            st=mid+1;
        }
        if(target < arr[mid]){
            end=mid-1;
        }
        if(target == arr[mid]){
            idx=mid+1;
            break;
        }
    }
    cout << idx;
}