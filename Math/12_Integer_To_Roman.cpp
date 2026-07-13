#include<iostream>
#include<string>
#include<utility>
#include<vector>
using namespace std;

int main(){
    int num =  3749;
    vector<pair<int, string>> ht= {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };

    string s = "";
    int i;

    for(i=0; i<ht.size(); i++){
        while(num >= ht[i].first){
            s += ht[i].second;
            num -= ht[i].first;
        }
    }

    cout<<"Integer to Roman: "<<s<<endl;
    return 0;
}