//https://leetcode.com/problems/maximum-gap/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)return 0;
        sort(nums.begin(),nums.end());
        int n=0;
        int size=nums.size();
        for(int i=0 ; i<size-1 ; ++i){
            if(nums[i+1]-nums[i]>n)n=nums[i+1]-nums[i];
        }
        return n;
    }
};
int main(){
    Solution s;
    vector<int> nums = {3,6,9,1};
    cout<<s.maximumGap(nums);
    return 0;
}