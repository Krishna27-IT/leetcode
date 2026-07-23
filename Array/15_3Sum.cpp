#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Brute Force
/*int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans;

    for(int i=0 ; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end());
                    bool found = false;
                    for(auto &row : ans){
                        if(row ==  triplet){
                            found = true;
                            break;
                        }
                    }
                    if(!found){
                        ans.push_back(triplet);
                    }
                }
            }
        }
    }

    for(auto &row : ans){
        for(int element : row){
            cout<<element<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/

// Two Pointer
int main(){
    vector<int> nums = {-2,0,0,2,2};
    vector<vector<int>> ans;
    size_t n = nums.size();

    sort(nums.begin(), nums.end());

    for(int i=0; i<n-2; i++){
        int left = i+1;
        int right = n-1;

        if (i > 0 && nums[i] == nums[i - 1]) continue;
        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum < 0){
                left++;
            }else if(sum > 0){
                right--;
            }else{
                ans.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right + 1]) right--;
            }
        }
    }

    for(auto &row : ans){
        for(int element : row){
            cout<<element<<" ";
        }
        cout<<endl;
    }

    return 0;
}