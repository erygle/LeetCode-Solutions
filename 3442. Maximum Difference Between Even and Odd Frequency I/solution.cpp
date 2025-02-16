//https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDifference(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        int maxDiff = -1;
        for(auto it=freq.begin(); it!=freq.end(); it++){
            int even = 0, odd = 0;
            for(auto it2=freq.begin(); it2!=freq.end(); it2++){
                if(it2->second%2==0)even += it2->second;
                else odd += it2->second;
            }
            if(even>0 && odd>0){
                maxDiff = max(maxDiff, even-odd);
            }
        }
        return maxDiff;
    }
};
