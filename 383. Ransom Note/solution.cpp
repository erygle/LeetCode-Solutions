//https://leetcode.com/problems/ransom-note/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        vector<char>arr;
        for(auto k:ransomNote){
            mp[k]++;
            arr.push_back(k);
        }
        for(auto k:magazine){
            mp[k]--;
        }
        for(auto k:arr){
            if(mp[k]>0)return false;
        }
        return true;
    }
};

int main(){
    string ransomNote="aa";
    string magazine="aab";
    Solution sol;
    cout<<sol.canConstruct(ransomNote,magazine);
    return 0;
}