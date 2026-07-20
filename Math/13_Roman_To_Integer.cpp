#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string s = "MCMXCIV";
    unordered_map<char, int> mp = {
        {'M', 1000},
        {'D', 500},
        {'C', 100},
        {'L', 50},
        {'X', 10},
        {'V', 5},
        {'I', 1}
    };

    int i;
    int num=0;

    for(i=0; i < s.size(); i++){
        if(i+1 < s.length()){
            int current = mp[s[i]];
            int next = mp[s[i+1]];
            if(current < next){
                num -= current;
            }else{
                num += current;
            }
        }else{
            num += mp[s[i]];
        }
    }

    cout<<"Roman To Integer: "<<num<<endl;
    return 0;
}