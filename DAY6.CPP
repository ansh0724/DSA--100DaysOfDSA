#include <iostream>
#include <vector>
using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4};
//     // vector <int> sz = 4;
//     vector<int> finalarr(4);
//     // vector<int> ans;
//     for (int i = 0; i < 4; i++)
//     {
//         int multi = 1;
//         for (int j = 0; j < 4; j++)
//         {
//             if( i != j){
//                 multi *= arr[j];
//             }
//         }
//         finalarr[i] = multi;
//     }
//     for(int i =0;i < 4;i++){
//         cout << finalarr[i]<<" ";
//     }

// }

int main(){
    // int arr[] = {1,2,3,4};
    // int finalarr[4];
    // int sz=4;

    // cout << &sz<< endl;
    // return 0;
    
    // int a =5;
    // int *p = &a;
    // int **q = &p;
    // cout << *p<<endl;
    // cout << **q<<endl;
    // cout << p <<endl;
    // cout << *q<<endl;

    int arr[] = {10,20,30,40};
    int* ptr= arr;
    cout <<*(ptr + 1)<<endl;
    cout <<*(ptr + 3)<< endl;
    ptr++;
    cout <<ptr;


}