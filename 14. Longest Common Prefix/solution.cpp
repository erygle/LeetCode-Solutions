//https://leetcode.com/problems/longest-common-prefix/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string str = "";
        for(int i=0 ; i<min(strs[0].size(),strs[strs.size()-1].size()) ; ++i){
          if(strs[0][i] == strs[strs.size()-1][i])str+=strs[0][i];
          else return str;
        }
      return str;
    }
};
int main(){
    Solution s;
    vector<string> v = {"flower","flow","flight"};
    cout<<s.longestCommonPrefix(v);
    return 0;
}
