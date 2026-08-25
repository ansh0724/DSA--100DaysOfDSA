#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // string s = "My name is ansh";
    // int n = s.length();
    // // cout << n;
    // string ans = " ";
    // reverse(s.begin(), s.end());
    // for(int i =0; i <n ;i++){
    //     string word = "";
    //     while( i < n && s[i] != ' '){
    //         word += s[i];
    //         i++;
    //     }
    //     reverse(word.begin(), word.end());
    //     if(word.length() > 0){
    //         ans+= word +" ";
    //     }
    // }
    // cout << ans.substr(1);

    char chars[] = {'a', 'a', 'b', 'b', 'c', 'c'};

    int n = sizeof(chars) / sizeof(chars[0]);
    int idx = 0;
    for(int i =0;i <n;i++){
        char ch = chars[i];
        int count = 0;
        while (i < n && chars[i] == ch)
        {
            count++;i++;
        }
        if(count == 1){
            chars[idx++] =  ch;
        }else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(char dig: str){
                chars[idx++] = dig;
            }
        }
        i--;
        
    }
}