//https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/?envType=daily-question&envId=2024-05-01
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums1) {
        int max = -1;
        set<int>nums;
        for(auto k:nums1)nums.insert(k);
        unordered_map<int,int>mp;
        for(auto k: nums)mp[abs(k)]++;
        for(auto k: mp){
            if(k.second > 1 && k.first > max)max = k.first;
        }
        return max;
    }
};
int main(){
    Solution s;
    vector<int> v = {3, 2, -2, 5, -3};
    cout<<s.findMaxK(v)<<endl;
    return 0;
}
