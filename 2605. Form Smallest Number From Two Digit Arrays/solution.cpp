//https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto k:nums1)mp[k]++;
        for(auto k:nums2)mp[k]++;
        for(auto k:mp)if(k.second>1)return k.first;
        sort(nums1.begin(),nums1.end()); 
        sort(nums2.begin(),nums2.end());
        if(nums1[0]<nums2[0])return nums1[0]*10 + nums2[0];
        return nums2[0]*10 + nums1[0];
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {6,7};
    vector<int> nums2 = {6,0,4};
    cout << s.minNumber(nums1,nums2) << endl;
    return 0;
}
