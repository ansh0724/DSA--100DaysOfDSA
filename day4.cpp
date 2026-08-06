#include <iostream>
#include <vector>
using namespace std;

// double binaryPower(int bf,double x){
//     double ans =1;
//     if(bf < 0){
//         x = 1/x;
//         bf=-bf;
//     }
//     while(bf >0 ){
//         if(bf % 2 == 1){
//             ans *= x;
//         }
//         x *=x;
//         bf /=2;
//     }
//     return ans;
// }


// double bintoNum() {
//     return binaryPower(-3, 2);
// }

// int main() {
//     cout << bintoNum();
//     return 0;
// }
// double myPow(double x, int n){
//     long binForm = n;
//     double ans =1;

//     while(binForm > 0){
//         if(binForm %2 == 1){
//             ans *=x;
//         }
//         x *=x;
//         binForm /=2;
//     }
//     return ans;
// }



// int main(){
    
//     int arr[] = {7,1,5,3,6,4};
//     int sz = 6;
//     // int mini =arr[0];
//     // int max = arr[0];
//     int buyDay = 0;
//     int sellDay=0;
//     int maxProfit =0;

//     for(int i =0;i < sz;i++){
//         for(int j =i+1;j < sz;j++){
//             if(maxProfit < arr[j]-arr[i]){
//                 maxProfit = arr[j]-arr[i];
//                 buyDay=i+1;
//                 sellDay=j+1;
//             }
//         }
//         // int mini = min(mini,arr[i]);
//         // if(mini > arr[i]){
//         //     mini = arr[i];
//         //     minIdx = i;
//         // }

//         // if(max < arr[i]){
//         //     max = arr[i];
//         // }

//     }
//     cout<<"Buy Day " << buyDay<< endl;
//     cout<< "Sell Day " << sellDay<<endl;
//     cout << "Profit "<< maxProfit;
//     // for(int j =minIdx+1;j<6;j++){
//     //     if(max < arr[j]){
//     //         max = arr[j];
//     //         maxIdx = j;
//     //     }
//     // }
//     // cout << mini;
//     // cout << max;
//     // cout << "Buy Day"<< minIdx+1;
//     // cout << "Sell Day"<< maxIdx+1;
// }

//Buy and sell stock problem

// int main() {
//     int arr[] = {7, 1, 5, 3, 6, 4};
//     int sz = 6;

//     int minPrice = arr[0];
//     int minDay = 0;

//     int maxProfit = 0;
//     int buyDay = 0;
//     int sellDay = 0;

//     for (int i = 1; i < sz; i++) {

//         // Check if selling today gives better profit
//         if (arr[i] - minPrice > maxProfit) {
//             maxProfit = arr[i] - minPrice;
//             buyDay = minDay;
//             sellDay = i;
//         }

//         // Update minimum price for future days
//         if (arr[i] < minPrice) {
//             minPrice = arr[i];
//             minDay = i;
//         }
//     }

//     cout << "Buy Day  : " << buyDay + 1 << endl;
//     cout << "Sell Day : " << sellDay + 1 << endl;
//     cout << "Profit   : " << maxProfit << endl;

//     return 0;
// }

// int main(){
//     vector<int> prices={7,1,5,3,6,4};
//     int maxprofit = 0, bestBuy = prices[0];
//     for(int i =0;i< prices.size();i++){
//         if(prices[i] > bestBuy){
//             maxprofit = max(maxprofit, prices[i] - bestBuy);

//         }
//         bestBuy = min(bestBuy,prices[i]);
//     }
//     cout << maxprofit;
// }