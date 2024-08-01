//https://leetcode.com/problems/number-of-senior-citizens/description/?envType=daily-question&envId=2024-08-01
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(string str){
        int sum=0,temp;
        temp=str[11]-'0';
        sum+= temp*10;
        temp=str[12]-'0';
        sum+=temp;
        return (sum>60);
    }
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto k: details)
            if(check(k))ans++;
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010","9273338290F4010"};
    cout << s.countSeniors(details) << endl;
    return 0;
}