//https://leetcode.com/problems/most-frequent-even-element/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(auto k: nums)mp[k]++;
        int ans=-1;
        int repeat=0;
        for(auto k: mp){
            if(k.first%2==0 && k.second>repeat){
                ans=k.first;
                repeat=k.second;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 2, 2, 3};
    Solution obj;
    int result = obj.mostFrequentEven(nums);
    cout << "Most frequent even element: " << result << endl;
    return 0;
}
