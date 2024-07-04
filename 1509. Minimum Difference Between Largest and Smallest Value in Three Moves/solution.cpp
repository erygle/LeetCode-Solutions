//https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/description/?envType=daily-question&envId=2024-07-04
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4)return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return min({nums[n-1]-nums[3],nums[n-2]-nums[2],nums[n-3]-nums[1],nums[n-4]-nums[0]});
    }
};
int main(){
    Solution s;
    vector<int> v = {6,6,0,1,1,4,6};
    cout<<s.minDifference(v);
    return 0;
}