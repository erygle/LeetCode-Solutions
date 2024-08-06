//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(auto k: nums)s.insert(k);
        vector<int>ans;
        for(auto k: s)ans.push_back(k);
        nums=ans;
        return s.size();
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3};
    Solution obj;
    int result = obj.removeDuplicates(nums);
    cout << "Length of array after removing duplicates: " << result << endl;
    cout << "Array after removing duplicates: ";
    for(auto k: nums)cout<<k<<" ";
    return 0;
}