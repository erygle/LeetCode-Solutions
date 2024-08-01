//https://leetcode.com/problems/wiggle-sort-ii/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int n=nums.size();
        int l=(n+1)/2-1;
        int r=n-1;
        for(int i=0 ; i<n ; i++){
            if(i%2==0){
                nums[i]=temp[l];
                l--;
            }else{
                nums[i]=temp[r];
                r--;
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 5, 1, 1, 6, 4};
    s.wiggleSort(nums);
    for(auto k:nums)cout<<k<<" ";
    return 0;
}
