//https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/description/?envType=daily-question&envId=2024-08-04

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long> ans;
        for (int i = 0; i < n; i++) {
            long long subSum = 0;
            for (int j = i; j < n; j++) {
                subSum += nums[j];
                ans.push_back(subSum);
            }
        }
        sort(ans.begin(), ans.end());
        long long sum = 0;
        for (int i = left - 1; i < right; i++) {
            sum += ans[i];
        }
        return static_cast<int>(sum % 1000000007);
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    int left = 1;
    int right = 3;

    Solution obj;
    int result = obj.rangeSum(nums, n, left, right);
    cout << "Range sum: " << result << endl;

    return 0;
}