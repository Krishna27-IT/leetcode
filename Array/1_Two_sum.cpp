#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> mp;
            for(int i=0; i<nums.size(); i++){
                int need = target - nums[i];
                if(mp.find(need) != mp.end()){
                    return {mp[need],i};
                }else{
                    mp[nums[i]] = i;
                }
            }
            return {};
        }
};

int main(){
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = s.twoSum(nums,target);
    for(int i: result){
        cout << i << " ";
    }
    return 0;
}
