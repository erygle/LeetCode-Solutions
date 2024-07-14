//https://leetcode.com/problems/majority-element-ii/submissions/1316635489/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int rep = nums.size()/3;
        unordered_map<int,int>mp;
        for(auto k: nums)mp[k]++;
        vector<int>ans;
        for(auto k: mp)
            if(k.second>rep)
                ans.push_back(k.first);
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,2,3};
    vector<int> ans = s.majorityElement(nums);
    for(auto k: ans)cout<<k<<" ";
    return 0;
}
