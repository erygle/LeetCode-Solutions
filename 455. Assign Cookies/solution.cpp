//https://leetcode.com/problems/assign-cookies/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        int n = g.size();
        int m = s.size();
        int max = 0;
        while(i<n && j<m){
            if(s[j]>=g[i]){
                max++;
                i++;
            }
            j++;
        }
        return max;
    }
};
int main(){
    Solution s;
    vector<int> g = {1,2,3};
    vector<int> c = {1,1};
    cout<<s.findContentChildren(g,c)<<endl;
    return 0;
}