#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int num[]={3,3};
    int n = sizeof(num)/sizeof(num[0]);
    unordered_map<int,int> mp;
    int target = 6;

    for(int i=0; i<n; i++){
        int need = target - num[i];
        if(mp.find(need) != mp.end()){
            cout<<"["<<mp[need]<<","<<i<<"]\n";
            break;
        }else{
            mp[num[i]] = i;
        }
    }
    return 0;
}