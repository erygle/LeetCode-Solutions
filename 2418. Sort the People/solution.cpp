//https://leetcode.com/problems/sort-the-people/description/?envType=daily-question&envId=2024-07-22
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mp;
        vector<string>ans;
        for(int i=0 ; i<names.size(); i++)
            mp[heights[i]]=names[i];
        for(auto k: mp)ans.push_back(k.second);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> names = {"Alex", "Ben", "Curt", "Duke"};
    vector<int> heights = {5, 3, 2, 8};
    vector<string> res = s.sortPeople(names, heights);
    for (auto x : res) {
        cout << x << " ";
    }
    cout << endl;
}