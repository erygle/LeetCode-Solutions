//https://leetcode.com/problems/roman-to-integer/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int sum=0;
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        for(int i=0 ; i<n ; i++){
            if(i+1<n && mp[s[i]]<mp[s[i+1]]){
                sum += mp[s[i+1]] - mp[s[i]];
                i++;
            }else sum += mp[s[i]];
        }
        return sum;
    }
};

int main() {
    Solution s;
    string str = "MCMXCIV";
    cout << s.romanToInt(str) << endl;
}