//https://leetcode.com/problems/insert-interval/description/?envType=daily-question&envId=2024-03-17
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int n = intervals.size();
        int i = 0;
        while(i<n && intervals[i][1]<newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<n && intervals[i][0]<=newInterval[1]){
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
            i++;
        }
        ans.push_back(newInterval);
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<int>> g = {{1,3},{6,9}};
    vector<int> h = {2,5};
    vector<vector<int>> ans = s.insert(g,h);
    for(auto x:ans){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
    return 0;
}