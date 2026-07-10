#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool solve(int i,int j,string &s,string &p,vector<vector<int>> &dp){
    if(j == p.length()){
        return  i == s.length();
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    bool firstMatch = (i < s.length()) && (s[i] == p[j] || p[j] == '.');
    
    if(j+1 < p.length() && p[j+1] == '*'){
        dp[i][j] = solve(i,j+2,s,p,dp) || (firstMatch && solve(i+1,j,s,p,dp));
        return dp[i][j];
    }

    dp[i][j] = firstMatch && solve(i + 1, j + 1, s, p,dp);
    return dp[i][j];
}

int main(){
    string s = "aaa";
    string p = "a*";
    int i=0, j=0;
    int n = s.length();
    int m = p.length();

    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));

    if(solve(i,j,s,p,dp)){
        cout<<"String s matches Pattern p\n";
    }else{
        cout<<"Not Matched!\n";
    }
       
    return 0;
}