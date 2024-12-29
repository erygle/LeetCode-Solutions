//https://leetcode.com/problems/check-balanced-string/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isBalanced(string number) {
        int temp,evenSum = 0, oddSum = 0, digitCount = 1;
        for(auto k: number){
            temp = k - '0';
            if(!(digitCount%2))evenSum += k - '0';
            else oddSum += k - '0';
            digitCount++;
        }
        return evenSum==oddSum;
    }
};

int main(){
    Solution s;
    if(!s.isBalanced("1234"))cout<<"False\n";
    else cout<<"True\n";
return 0;
}