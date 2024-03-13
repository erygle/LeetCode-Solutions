//https://leetcode.com/problems/find-the-pivot-integer/description/?envType=daily-question&envId=2024-03-13
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int summon(int num){return (num*(num+1))/2;}
    int pivotInteger(int n) {
        int temp = summon(n);
        int sum=0;
        for(int i=0 ; i<n ; i++){
            if((temp-summon(i))==summon(i+1))return i+1;
        }
        return -1;
    }
};

int main(){
    Solution s;
    cout<<s.pivotInteger(5)<<endl;
    return 0;
}