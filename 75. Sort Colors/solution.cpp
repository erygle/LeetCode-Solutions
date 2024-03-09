//https://leetcode.com/problems/sort-colors/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};
int main(){
    Solution s;
    vector<int> nums = {2,0,2,1,1,0};
    s.sortColors(nums);
    for(auto k: nums)cout<<k<<" ";
    return 0;
}