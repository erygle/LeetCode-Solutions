//https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/?envType=daily-question&envId=2024-07-08

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int f(int n, int k){
        if(n==1)return 0;
        return (f(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        int ans=f(n,k);
        return ans+1;
    }
};

int main(){
    Solution s;
    int n=5,k=2;
    cout<<s.findTheWinner(n,k);
    return 0;
}