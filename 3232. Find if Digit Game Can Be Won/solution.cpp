//https://leetcode.com/problems/find-if-digit-game-can-be-won/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int odd=0,even=0;
        for(auto k: nums){
            if(log10(k)<1)odd+=k;
            else even+=k;
        }
        return !(even==odd);
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    cout<<s.canAliceWin(nums);
    return 0;
}