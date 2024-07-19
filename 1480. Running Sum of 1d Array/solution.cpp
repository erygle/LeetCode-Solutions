//https://leetcode.com/problems/running-sum-of-1d-array/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1 ; i<nums.size() ; i++)
            nums[i] = nums[i]+nums[i-1];
        return nums;
    }
};

int main(){
    vector<int> nums={1,2,3,4};
    Solution sol;
    vector<int> res=sol.runningSum(nums);
    for(int i:res)cout<<i<<" ";
    return 0;
}
