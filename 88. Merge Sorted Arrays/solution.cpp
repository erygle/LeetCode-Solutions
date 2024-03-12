//https://leetcode.com/problems/merge-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(!n)return;
        int j=0;
        for(int i=0 ; i<nums1.size() ; i++){
            if(nums1[i]==0 && j<n){
                nums1[i] = nums2[j];
                j++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};
int main(){
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    s.merge(nums1,3,nums2,3);
    for(auto k: nums1)cout<<k<<" ";
    return 0;
}