//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0 ; i<nums.size() ; i++){
            if(mp[nums[i]]==2){
                nums.erase(nums.begin()+i);
                i--;
            }
            else mp[nums[i]]++;
        }
        for(auto k : mp)cout<<k.first<<" : "<<k.second<<endl;
        return nums.size();
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};
    cout<<s.removeDuplicates(nums);
    return 0;
}