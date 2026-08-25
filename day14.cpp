#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// int main(){
//     string s = "the sky is pink";
//     int n = s.length();
//     string ans =" ";
//     reverse(s.begin(),s.end());
//     for(int i =0;i < n;i++){
//         string word =" ";
//         while(i < n && s[i] != ' '){
//             word +=s[i];
//             i++;
//         }
//         reverse(word.begin(),word.end());
//         ans += word + ' ';
//     }
//     cout << ans;
// }

// int main(){
//     char chars[] = {'a','a','b','b','c','c','c'};
//     int sz = sizeof(chars) / sizeof(chars[0]);
//     string ans;

//     for(int i=0;i < sz;i++){
//         int count =0;
//         char ch=chars[i];
//         while(i < sz && chars[i] == ch) {
//             count++;
//             i++;
//         }
//         if(count == 1){
//             ans.push_back(chars[i - 1]);
            
//         }else{
            
//             ans.push_back(chars[i - 1]);
//             ans += to_string(count);
//         }
//         i--;
//     }
//     cout << ans;
// }

bool armstrongNumber(int n){
    int sum=0;
    int original = n;
    
    while(n>0){
        int digit = n%10;
        sum+=digit*digit*digit;
        n /= 10;
    }
    if(sum == original){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n=34;
    if(armstrongNumber(n)){
        cout <<"ha hai";
    }else{
        cout <<"Nahi hai";
    }
}