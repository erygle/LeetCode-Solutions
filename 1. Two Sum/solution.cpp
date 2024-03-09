//https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n = nums.size();
        for(int i=0 ; i<n ; i++)
            m[nums[i]] = i;
        for(int i=0 ; i<n ; i++){
            int temp = target - nums[i];
            if(m.find(temp) != m.end() && m[temp] != i)
                return {i,m[temp]}; 
        }
        return {};
    }

};
int main(){
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = s.twoSum(nums,target);
    for(auto x : ans)
        cout<<x<<" ";
    return 0;
}