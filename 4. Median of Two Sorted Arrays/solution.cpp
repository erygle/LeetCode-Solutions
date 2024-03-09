//https://leetcode.com/problems/median-of-two-sorted-arrays/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> nums3(nums1.begin(), nums1.end());
        for (auto k : nums2)
            nums3.push_back(k);
        sort(nums3.begin(),nums3.end());
        int n = nums3.size();
        if(n%2==1)return nums3[n/2];
        return (nums3[n/2]+nums3[n/2-1])/2; 
    }
};
int main(){
    Solution s;
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    cout<<s.findMedianSortedArrays(nums1,nums2);
    return 0;
}