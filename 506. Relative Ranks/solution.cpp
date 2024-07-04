//https://leetcode.com/problems/relative-ranks/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> v;
        for(int i=0;i<score.size();i++){
            v.push_back({score[i],i});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<string> ans(score.size());
        for(int i=0;i<v.size();i++){
            if(i==0)ans[v[i].second] = "Gold Medal";
            else if(i==1)ans[v[i].second] = "Silver Medal";
            else if(i==2)ans[v[i].second] = "Bronze Medal";
            else ans[v[i].second] = to_string(i+1);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> v = {5,4,3,2,1};
    vector<string> ans = s.findRelativeRanks(v);
    for(auto i:ans)cout<<i<<" ";
    return 0;
}
