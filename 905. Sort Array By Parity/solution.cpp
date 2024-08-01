//https://leetcode.com/problems/sort-array-by-parity/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int n=r+1;
        vector<int>ans(nums.size());
        for(int i=0 ; i<n ; i++){
            if(nums[i]%2){
                ans[r]=nums[i];
                r--;
            }else{
                ans[l]=nums[i];
                l++;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,1,2,4};
    vector<int> ans = s.sortArrayByParity(nums);
    for(auto k:ans)cout<<k<<" ";
    return 0;
}