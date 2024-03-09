//https://leetcode.com/problems/valid-parentheses/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0 ; i<s.length() ; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(!st.empty()){
                    char temp = st.top();
                    if(s[i]==')' && temp=='('){
                        st.pop();
                    }
                    else if(s[i]==']' && temp=='['){
                        st.pop();
                    }
                    else if(s[i]=='}' && temp=='{'){
                        st.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        if(!st.empty())return false;
        return true;
    }
};
int main(){
    Solution s;
    cout<<s.isValid("()[]{}");
    return 0;
}