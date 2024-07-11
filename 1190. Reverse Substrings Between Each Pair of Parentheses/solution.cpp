//https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/?envType=daily-question&envId=2024-07-11
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        int n = s.size();
        for(int i=0 ; i<n ; i++){
            if(s[i]=='(')st.push(i);
            else if(s[i]==')'){
                int temp = st.top();
                st.pop();
                reverse(s.begin()+temp+1,s.begin()+i);
            }
        }
        string ans="";
        for(auto k: s)
            if(k!='(' && k!=')')
                ans += k;
        return ans;
    }
};

int main(){
    Solution s;
    string str = "(ed(et(oc))el)";
    cout<<s.reverseParentheses(str);
    return 0;
}