//https://leetcode.com/problems/excel-sheet-column-title/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        while(n){
            n--;
            ans += n%26+'A';
            n /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.convertToTitle(28);
    return 0;
}