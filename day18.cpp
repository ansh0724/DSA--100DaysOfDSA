#include <iostream>
using namespace std;

// void abc(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout << n<<" ";
//     abc(n-1);
// }

// int factorial(int n){
//     if(n==0){
//         return 1;

//     }
//     return n * factorial(n-1);
// }

// int sumNum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n + sumNum(n-1);
// }

// int main(){
//     // abc(4);
//     cout   << sumNum(5);
// }

// int fab(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fab(n-1)+fab(n-2);
// }

bool sorted(const int arr[], int n){
    // arr = {1,2,3,4,5}
    if(arr[n]==1){
        return arr[n];
    }
    if(arr[n-1]>> arr[n-2]){
        return true;
    }else{
        return false;
    }

}

int main(){
    // cout << fab(6)<<endl; 
    int arr[] = {1,2,3,4,5};
    int n = 5;
    cout << sorted(arr,n);
}