//https://leetcode.com/problems/product-of-array-except-self/description/?envType=daily-question&envId=2024-03-15
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int left = 1;
        int right = 1;
        for(int i=0 ; i<n ; i++){
            ans[i]*=left;
            left*=nums[i];
            ans[n-i-1]*=right;
            right*=nums[n-i-1];
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> g = {1,2,3,4};
    vector<int> ans = s.productExceptSelf(g);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}