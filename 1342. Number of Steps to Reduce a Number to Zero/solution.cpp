//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int ct=0;
        while(num!=0){
            if(!(num%2)){
                ct++;
                num/=2;
            }else{
                ct++;
                num--;
            }
        }
        return ct;
    }
};

int main(){
    int num=14;
    Solution sol;
    cout<<sol.numberOfSteps(num);
    return 0;
}