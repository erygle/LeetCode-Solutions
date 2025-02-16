//https://leetcode.com/problems/remove-element/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {3,2,2,3};
    int val = 3;
    cout<<obj.removeElement(nums, val);
}