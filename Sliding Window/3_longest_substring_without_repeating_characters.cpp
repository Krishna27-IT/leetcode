#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    string s =  "pwwkew";
    unordered_map<char,int> mp;
    int left=0;
    int maxLength=0;

    for(int i = 0; i < s.length(); i++){
        if(mp.find(s[i]) != mp.end()){
            left = max(left, mp[s[i]]+1);
        }
        mp[s[i]] = i;
        int length =  i - left +1;
        maxLength = max(maxLength, length);
    }

    cout<<"The Longest Substring from "<<s<<" is "<<maxLength<<endl;
    return 0;
}