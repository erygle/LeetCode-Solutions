//https://leetcode.com/problems/palindrome-number/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(!x)return true;
        int l,r,digits;
        while(x>0){
            digits = log10(x);
            int t=pow(10,digits);
            l = x/t;
            r = x%10;
            if(l==r){
                x = x%t;
                x = x/10;
            }else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    cout<<s.isPalindrome(121);
    return 0;
}
