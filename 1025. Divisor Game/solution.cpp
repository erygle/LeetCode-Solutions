//https://leetcode.com/problems/divisor-game/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool divisorGame(int n) {
        return n%2==0;
    }
};

int main(){
    Solution s;
    cout<<s.divisorGame(2);
    return 0;
}