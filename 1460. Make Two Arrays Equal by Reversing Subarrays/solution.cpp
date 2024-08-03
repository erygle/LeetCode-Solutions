//https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description/?envType=daily-question&envId=2024-08-03
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto k:target)mp[k]++;
        for(auto k:arr)mp[k]--;
        return all_of(mp.begin(),mp.end(),[](auto k){return k.second==0;});    
    }
};

int main() {
    Solution s;
    vector<int> target = {1, 2, 3, 4};
    vector<int> arr = {2, 4, 1, 3};
    cout<<s.canBeEqual(target,arr);
    return 0;
}