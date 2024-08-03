//https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0 ; i<n ; i++)mp[nums[i]]=i;
        sort(nums.begin(),nums.end());
        int ans=-1;
        if(nums[n-1]/2>=nums[n-2])ans=mp[nums[n-1]];
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 6, 1, 0};
    cout<<s.dominantIndex(nums);
    return 0;
}