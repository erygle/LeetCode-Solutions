//https://leetcode.com/problems/permutations/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>arrB;
    void permute(vector<int>arr,int f,int l){
        if(f==l){
            arrB.push_back(arr);
        }
        for(int i=f ; i<=l ; i++){
            swap(arr[i],arr[f]);
            permute(arr,f+1,l);
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permute(nums,0,nums.size()-1);
        return arrB;
    }
};
int main(){
    Solution s;
    vector<int> v = {1,2,3};
    vector<vector<int>> ans = s.permute(v);
    for(auto x : ans){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}