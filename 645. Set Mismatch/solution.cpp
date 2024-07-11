//https://leetcode.com/problems/set-mismatch/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        set<int>s2(nums.begin(), nums.end());
        int duplicate, missing;
        
        for (int num : nums) {
            if (s.find(num) != s.end()) {
                s.erase(num);
            } else {
                duplicate = num;
            }
        }
        
        for (int i = 1; i <= nums.size(); i++) {
            if (s2.find(i) == s2.end()) {
                missing = i;
                break;
            }
        }
        
        return {duplicate, missing};
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,2,4};
    vector<int> ans = s.findErrorNums(nums);
    for(auto k: ans)
        cout<<k<<" ";
    return 0;
}