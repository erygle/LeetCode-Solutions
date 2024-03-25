//https://leetcode.com/problems/decode-string/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string res = "";
        int num = 0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                num = num*10 + s[i]-'0';
            }else if(s[i]=='['){
                numStack.push(num);
                strStack.push(res);
                num = 0;
                res = "";
            }else if(s[i]==']'){
                int k = numStack.top();
                numStack.pop();
                string temp = strStack.top();
                strStack.pop();
                for(int j=0;j<k;j++){
                    temp += res;
                }
                res = temp;
            }else{
                res += s[i];
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    cout<<s.decodeString("3[a]2[bc]")<<endl;
    return 0;
}
