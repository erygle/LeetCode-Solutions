//https://leetcode.com/problems/divide-two-integers/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(long long dividend, long long divisor) {
        if(dividend == -2147483648 && divisor == -1)return 2147483647;
        return (int)dividend / divisor;
    }
};
int main(){
    Solution s;
    cout<<s.divide(10,3);
    return 0;
}