//https://leetcode.com/problems/permutations-ii/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    void permute(vector<int>&arr,int f,set<vector<int>>&ans){
        if(f == arr.size()){
            ans.insert(arr);
            return;
        }
        
            for(int i=f ; i< arr.size() ; i++){
                //if(i == f || arr[i] != arr[f]){
                    swap(arr[i],arr[f]);
                    permute(arr,f+1,ans);
                    swap(arr[i],arr[f]);
                    
                //}
            }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>arrB;
        //sort(nums.begin(),nums.end());
        permute(nums,0,arrB);
        vector<vector<int>>out;
        for(auto k : arrB)out.push_back(k);
        return out;
    }
};
int main(){
    Solution s;
    vector<int> v = {1,1,2};
    vector<vector<int>> ans = s.permuteUnique(v);
    for(auto x : ans){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}