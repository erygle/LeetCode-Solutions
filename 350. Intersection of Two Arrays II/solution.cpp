//https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto k: nums2)mp[k]++;
        for(auto k: nums1){
            if(mp[k]>0){
                ans.push_back(k);
                mp[k]--;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> ans = s.intersect(nums1,nums2);
    for(auto k: ans)
        cout<<k<<" ";
    return 0;
}