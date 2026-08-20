#include <iostream>
#include <string>
using namespace std;
int main(){
     string s1 = "ab";
     string s2 = "eidbaooo";

     int freq[26] = {0};
     
     for(int i =0;i < s1.length();i++){
        int idx = s1[i] - 'a';
        freq[idx]++;
     }
     int windSize = s1.length();

     for(int i =0;i <s2.length();i++){
        int windIdx = 0,idx=i;
        while(windIdx < windSize && idx < s2.length()){
            
        }
     }

}