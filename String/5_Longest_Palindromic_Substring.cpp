#include<iostream>
#include<string>
using namespace std;

// Expand around center
string expand(string& s, int left, int right){
    while(left>=0 && right<s.size() && s[left]==s[right]){
        left--;
        right++;
    }
    return s.substr(left+1,right-left-1);
}

int main(){
    string s = "babad";
    string len1, len2, maxlength;

    for(int i=0; i<s.size(); i++){
        len1=expand(s,i,i);
        len2=expand(s,i,i+1);

        if(len1.size() > maxlength.size()){
            maxlength = len1;
        }
        if(len2.size() > maxlength.size()){
            maxlength = len2;
        }
    }

    cout<<"Longest Palindrome Substring: "<<maxlength<<endl;

    return 0;
}