//https://leetcode.com/problems/sort-an-array/description/?envType=daily-question&envId=2024-07-25
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};
int main() {
    Solution s;
    vector<int> nums = {5,2,3,1};
    vector<int> res = s.sortArray(nums);
    for(auto i:res) cout << i << " ";
    cout << endl;
}