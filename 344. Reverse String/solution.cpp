//https://leetcode.com/problems/reverse-string/description/?envType=daily-question&envId=2024-06-02
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};
int main(){
    Solution s;
    vector<char> v = {'h','e','l','l','o'};
    s.reverseString(v);
    for(auto i:v)cout<<i<<" ";
    return 0;
}