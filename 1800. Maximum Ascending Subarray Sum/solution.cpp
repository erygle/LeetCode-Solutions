//https://leetcode.com/problems/maximum-ascending-subarray-sum/description/?envType=daily-question&envId=2025-02-04
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int maxSum = sum;
        for(int i=1; i<n; i++){
            if(nums[i]>nums[i-1]){
                sum += nums[i];
            }else{
                sum = nums[i];
            }
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
int main(){
    Solution s;
    vector<int> nums = {100,10,1};
    cout<<s.maxAscendingSum(nums)<<endl;
    return 0;
}