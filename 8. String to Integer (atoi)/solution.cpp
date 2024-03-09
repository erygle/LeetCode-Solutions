//https://leetcode.com/problems/string-to-integer-atoi/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        double res=0;
        int n = 0,p = 0;
        int i = 0;
        while(s[i] == ' ')i++;
        if(s[i]=='+'){
            p++;
            i++;
        }
        if(s[i]=='-'){
            n++;
            i++;
        }
        while(i<s.size() && s[i]>='0' && s[i]<='9'){
            res = res*10 + (s[i] - '0');
            i++;
        }
        if(n>0)res = res * -1;
        if(p>0 && n>0)return 0;
        if(res > INT_MAX)return INT_MAX;
        if(res < INT_MIN)return INT_MIN;
        return res;
    }
};
int main(){
    Solution s;
    cout<<s.myAtoi("42");
    return 0;
}
