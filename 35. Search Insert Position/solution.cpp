//https://leetcode.com/problems/search-insert-position/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& n, int target) {
        int index = lower_bound(n.begin(),n.end(),target) - n.begin();
        return index;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout<<s.searchInsert(nums,target);
    return 0;
}