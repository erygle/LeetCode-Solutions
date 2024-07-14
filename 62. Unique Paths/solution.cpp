//https://leetcode.com/problems/unique-paths/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>dp;
    int func(int m,int n){
        if(dp[m][n]!=0)return dp[m][n];
        if(m==0 || n==0) return dp[m][n] = 1;
        return dp[m][n] = func(m-1,n)+func(m,n-1);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        
        dp.assign(m,vector<int>(n,0));
        return func(m-1,n-1);
    }
};
int main(){
    Solution s;
    cout<<s.uniquePaths(3,2)<<endl;
    cout<<s.uniquePaths(7,3)<<endl;
    return 0;
}
