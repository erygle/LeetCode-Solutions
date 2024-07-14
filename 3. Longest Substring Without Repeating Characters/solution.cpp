//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int start = 0 ;
        int longest = 0;
        if(s.length() == 1)return 1;
        for(int end = 0 ; end < s.length() ; end++){
            if(mp.find(s[end]) != mp.end()){
                start = max(start,mp[s[end]]+1);
            }
            mp[s[end]] = end ;
            longest = max(longest,end-start+1);
        }
        return longest;
    }
};
int main(){
    Solution s;
    string str = "abcabcbb";
    cout<<s.lengthOfLongestSubstring(str);
    return 0;
}