//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,4,5,1,2};
    cout<<s.findMin(nums);
    return 0;
}