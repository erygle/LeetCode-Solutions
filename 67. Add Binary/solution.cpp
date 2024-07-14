//https://leetcode.com/problems/add-binary/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int n = a.size();
        int m = b.size();
        int carry=0;
        for(int i=n-1,j=m-1 ; i>=0 || j>=0 ; i--,j--){
            int sum = carry;
            if(i>=0)sum += a[i]-'0';
            if(j>=0)sum += b[j]-'0';
            ans += to_string(sum%2);
            carry = sum/2;
        }
        if(carry)ans += to_string(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    Solution s;
    string str1 = "11";
    string str2 = "1";
    cout<<s.addBinary(str1,str2);
    return 0;
}