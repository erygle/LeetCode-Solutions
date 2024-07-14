//https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/?envType=daily-question&envId=2024-03-18
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n = points.size();
        int ans = 0;
        int i = 0;
        while(i<n){
            int start = points[i][0];
            int end = points[i][1];
            i++;
            while(i<n && points[i][0]<=end){
                start = max(start,points[i][0]);
                end = min(end,points[i][1]);
                i++;
            }
            ans++;
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<int>> g = {{10,16},{2,8},{1,6},{7,12}};
    cout<<s.findMinArrowShots(g)<<endl;
    return 0;
}
