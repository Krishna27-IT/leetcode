#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Brute Force
int main(){
    vector<string> strs = {"flower", "flow","flight"};
    string s = "";

    for(int i=0; i<strs[0].size(); i++){
        bool allMatch = true;
        for(int j=1; j<strs.size(); j++){
            if(i >= strs[j].size() || strs[0][i] != strs[j][i]){
                allMatch = false;
                break;
            }
        }
        if(allMatch){
            s += strs[0][i];
        }else{
            break;
        }
    }

    cout<<"Longest Common Prefix: "<<s;
    return 0;
}