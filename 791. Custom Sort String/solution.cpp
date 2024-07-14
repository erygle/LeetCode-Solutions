//https://leetcode.com/problems/custom-sort-string/description/?envType=daily-question&envId=2024-03-11
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string customSortString(string order, string str) {
        map<char,int> mp;
        for(int i=0 ; i<str.size() ; i++){
            mp[str[i]]++;
        }
        string ans = "";
        for(int i=0 ; i<order.size() ; i++){
            if(mp.find(order[i])!=mp.end()){
                for(int j=0 ; j<mp[order[i]] ; j++){
                    ans+=order[i];
                }
                mp.erase(order[i]);
            }
        }
        for(auto k: mp){
            for(int j=0 ; j<k.second ; j++){
                ans+=k.first;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    cout<<s.customSortString("cba","abcd")<<endl;
    return 0;
}