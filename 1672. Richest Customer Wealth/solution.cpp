//https://leetcode.com/problems/richest-customer-wealth/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(auto row: accounts){
            int sum=0;
            for(auto col: row){
                sum+=col;
            }
            ans = max(sum,ans);
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> accounts={{1,2,3},{3,2,1}};
    Solution sol;
    cout<<sol.maximumWealth(accounts);
    return 0;
}