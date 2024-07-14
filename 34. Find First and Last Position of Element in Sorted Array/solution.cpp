//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)return {-1,-1};
        int f = -1;
        int l = -1;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==target && l==-1){
                f=i;
            }
            if(nums[i]==target && f!=-1){
                l=i;
            }
        }
        return {f,l};
    }
};
int main(){
    Solution s;
    vector<int> v = {5,7,7,8,8,10};
    vector<int> ans = s.searchRange(v,8);
    for(auto x : ans)
        cout<<x<<" ";
    return 0;
}