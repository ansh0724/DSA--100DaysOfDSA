// //find smallest and largest in array

#include <iostream>
using namespace std;
// int main(){
//     int arr[]={5,22,15,1,-15,-24};
//     int smallest=arr[0];
//     int largest =arr[0];
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i < n;i++){
//         if(arr[i] < arr[0]){
//             smallest=arr[i];
//         }
//         if(arr[i] > arr[0]){
//             largest=arr[i];
//         }
//     }
//     cout << smallest<< endl;
//     cout << largest<< endl;
// }

// //linear search

// int linearSearch(int arr[],int size, int target){
//     for(int i =0;i < size;i++){
//         if(target == arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int size=7, target=80;

//     // int idx=0;
//     // for(int i=0;i<size;i++){
//     //     if(arr[i]== target){
//     //         idx=i+1;
//     //     }

//     // }
//     cout << linearSearch(arr, size,target)<<endl;
//     // // return -1;
// }

// //reverse an array

// void reverseArray(int arr[],int sz){
//     int st=0,end=sz-1;
//     while(st < end){
//         swap(arr[st],arr[end]);
//         st++;
//         end--;
//     }
// }

// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int sz=7;
//     reverseArray(arr,sz);
//     for(int i=0;i <sz;i++){
//         cout << arr[i]<<" ";
//     }

// }

// void swapMaxMin(int arr[],int sz){
//     int min=arr[0];
//     int max=arr[0];
//     int minIdx=0;
//     int maxIdx=0;
//     for(int i=0;i<sz;i++){
//         if(min> arr[i]){
//             min = arr[i];
//             minIdx=i;
//         }
//         if(max< arr[i]){
//             max=arr[i];
//             maxIdx=i;
//         }
//     }
//     swap(arr[minIdx],arr[maxIdx]);

// }

// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int sz=7;
//     swapMaxMin(arr,sz);
//     for(int i=0;i<sz;i++){
//         cout << arr[i]<<" ";
//     }
//     return 0;
// }

// void uniquePrint(int arr[],int sz){
//     // int count;
//     for(int i=0;i<sz;i++){
//         int count=0;
//         for(int j=i+1;j<sz;j++){
//             if(arr[i] == arr[j]){
//                 count++;

//             }
//         }
//         if(count==1){
//             cout<< arr[i]<<" ";
//         }
//     }
// }

// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int sz=7;
//     uniquePrint(arr,sz);
// }

// void intersection(int arr1[], int arr2[], int sz)
// {
//     for (int i = 0; i < sz; i++)
//     {
//         for (int j = 0; j < sz; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 cout << arr1[i] << " ";
//                 break;
//             }
//         }
//     }
// }

// int main()
// {
//     int arr1[] = {4, 2, 7, 8, 1, 2, 5};
//     int arr2[] = {10, 2, 5, 6, 8, 20, 5};
//     int sz = 7;
//     intersection(arr1, arr2, sz);
// }