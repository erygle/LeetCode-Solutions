//https://leetcode.com/problems/find-all-duplicates-in-an-array/description/?envType=daily-question&envId=2024-03-25
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto k:nums){
            mp[k]++;
            if(mp[k]>1)ans.push_back(k);
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int>nums = {4,3,2,7,8,2,3,1};
    vector<int>ans = s.findDuplicates(nums);
    for(auto k:ans)cout<<k<<" ";
    cout<<endl;
    return 0;
}
