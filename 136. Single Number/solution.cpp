//https://leetcode.com/problems/single-number/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int singleNumber(vector<int>& nums) {
        int temp = 0 ;
        for(auto k : nums){
            temp = temp ^ k;
        }
        return temp;
    }
};

int main(){
    Solution s;
    vector<int> nums = {4,1,2,1,2};
    cout<<s.singleNumber(nums);
    return 0;
}