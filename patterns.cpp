
#include <iostream>
using namespace std;
// 1.Square Pattern


// int main(){
//     // int a =1;
//     int n =4;
//     for(int a=1;a<=n;a++){
//         for(int a=1; a<=n;a++){
//             cout<<a;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     // int a =1;
//     int n =4;
//     for(int a=1;a<=n;a++){
//         for(int j=1;j<=n;j++){
//             cout << "*" ;
//         }
//         cout<< endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     // int a =1;
//     int n =4;
//     for(int a=0;a<n;a++){
//         char ch ='A';
//         for(int j=0;j<n;j++){
//             // cout << "*" ;
//             cout << ch <<" ";
//             ch++;

//         }
//         cout<< endl;
//     }
// }


// int main(){
//     int n=3;
//     int a =1;
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cout << a;
//             a++;
//         }
//         cout << endl;

//     }
//     cout << a;
// }

// int main(){
//     int n=3;
//     char ch = 'A'; //65
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;

//     }
//     cout << ch;
// }

//Triangle Pattern


//for stars
// int main(){
//     int n=10;
//     for(int i=0;i<=n;i++){
//         for(int j =0;j<i;j++){
//             cout<< "* ";
//         }
//         cout<< endl;
//     }
// }

//For numbers
// int main(){
//     int n=10;
//     for(int i=1;i<=n;i++){
//         for(int j =1;j<=i;j++){
//             cout << i<<" ";
//         }
//         cout << endl;
//     }
// }

//Reverse triangle pattern

// int main(){
//     int n=4;
//     for(int i=0;i< n;i++){
//         for(int j=i+1;j>0;j--){
//             cout<<j;
//         }
//         cout << endl;
//     }
// }


// //Floyd's triangle
// int main(){
//     int n=4;
//     int a=1;
//     for(int i =0;i<n;i++){
//         for(int j =i+1;j>0;j--){
//             cout << a;
//             a++;
//         }
//         cout << endl;
//     }
// }


// //inverted  Triangle Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     int a = 1;

//     for(int i = 0; i < n; i++) {

//         // Print spaces
//         for(int j = 0; j < i; j++) {
//             cout << " ";
//         }

//         // Print numbers
//         for(int z = 0; z < n - i; z++) {
//             cout << a;
//         }

//         a++;
//         cout << endl;
//     }

//     return 0;
// }

// //butterfly pattern

// int main(){
//     int n =4;

//     //top

//     for(int i =0;i<n;i++){
//         for(int j =0;j<=i;j++){
//             cout << "*";
//         }
//         cout<< endl;
//     }

//     for(int i = 0;i<n;i++){
//         for(int j =0;j<2*n-2*i-2;j++){
//             cout << " ";
//         }
//         cout<< endl;
//     }
//     for(int i =0;i<n;i++){
//         for(int j =0;j<i;j++){
//             cout<< "*";
//         }
//         cout<< endl;
//     }
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     // Top half
//     for (int i = 0; i < n; i++) {
//         // Left stars
//         for (int j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         // Middle spaces
//         for (int j = 0; j < 2 * (n - i - 1); j++) {
//             cout << " ";
//         }
//         // Right stars
//         for (int j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Bottom half
//     for (int i = 0; i < n; i++) {
//         // Left stars
//         for (int j = 0; j < n - i; j++) {
//             cout << "*";
//         }
//         // Middle spaces
//         for (int j = 0; j < 2 * i; j++) {
//             cout << " ";
//         }
//         // Right stars
//         for (int j = 0; j < n - i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// //calculate sum of digits

// int main(){
//     int num =145;
//     int sum =0;
//     while(num > 0){
//         int digit = num%10;
//         sum += digit;
//         num = num/10;
//     }
//     cout<< sum;
// }

// int  factorial(int n){
//     int fact =1;
//     for(int i =1;i <=n;i++){
//         fact *=i;
//     }
//     return fact;
// }

// int nCr(int n,int r){
//     int fact_n = factorial(n);
//     int fact_r=factorial(r);
//     int fact_nr=factorial(n-r);

//     return fact_n/(fact_r*fact_nr); 
// }

// int main(){
//     int n =8;
//     int r=4;
//     // if(r>n){
//     //     cout<< "enter correct input";
//     // }

//     // int nume=1;
//     // for(int i=1;i<n+1;i++){
//     //     nume *=i;
//     // }
//     // int rfac=1;
//     // for(int i =1;i<r+1;i++){
//     //     rfac *=i;
//     // }
//     // int rfac2=1;
//     // for(int i=1;i <= n-r;i++){
//     //     rfac2 *=i;
//     // }

//     // int final = nume/(rfac*rfac2);
//     // cout << final;

//     cout << nCr(n,r);
//     // int final = 
// }