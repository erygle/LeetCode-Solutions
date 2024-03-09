//https://leetcode.com/problems/first-missing-positive/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int missing = 1;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(auto k: nums){
            if(k<1)continue;
            mp[k]++;
            if(mp.find(missing)!=mp.end())missing++;
        }
        return missing;
    }
};
int main(){
    Solution s;
    vector<int> nums = {3,4,-1,1};
    cout<<s.firstMissingPositive(nums);
    return 0;
}