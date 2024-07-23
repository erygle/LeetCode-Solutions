//https://leetcode.com/problems/sort-array-by-increasing-frequency/description/?envType=daily-question&envId=2024-07-23
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto k: nums)mp[k]++;
        vector<pair<int,int>>ans;
        for(auto k: mp)ans.push_back(k);
        sort(ans.begin(),ans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if(a.second == b.second){
                return a.first > b.first;
            }return a.second < b.second;
        });
        for(auto k: ans)cout<<k.first<<" "<<k.second<<endl;
        vector<int>res;
        for(auto k: ans){
            while(k.second>0){
                res.push_back(k.first);
                k.second--;
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,1,2,2,2,3};
    vector<int> res = s.frequencySort(nums);
    for (auto x : res) {
        cout << x << " ";
    }
    cout << endl;
}