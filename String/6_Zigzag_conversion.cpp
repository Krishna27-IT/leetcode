#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s= "PAYPALISHIRING";
    int numRows = 3;
    vector<string> rows(numRows);
    int currentRow=0, dir=1;

    if(numRows==1){
        cout<<s;
        return 0;
    }

    for(char c : s){
        rows[currentRow] += c;
        if(currentRow == 0){
           dir = 1;
        }
        if(currentRow == numRows-1){
            dir = -1;
        }
        currentRow += dir;
    }
   
    string ans;
    for(const string& r : rows){
        ans+=r;
    }
    cout<<ans;
    return 0;
}