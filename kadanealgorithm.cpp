#include <iostream>
#include <vector>                       
using namespace std;

//maximum subarray sum // kadanes algorithm

void maxSumOfSubsarray(int arr[],int sz){
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i < sz;i++){
        currentSum += arr[i];
        if(currentSum > maxSum){
            maxSum = currentSum;
        }
        if(currentSum < 0){
            currentSum =0;
        }

    }
    cout << "Maximum Subarray: "<< maxSum;
}


int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int sz=7;

    maxSumOfSubsarray(arr,sz);
}