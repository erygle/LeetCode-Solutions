//https://leetcode.com/problems/sqrtx/description/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x<2)return x;
        int low=1, high=x;
        while(low<=high){
            int mid = low + (high - low) / 2;
            long long square = static_cast<long long>(mid)*mid;
            if(square == (long)x)return mid;
            else if(square < (long)x)low = mid+1;
            else high = mid-1;
        }
        return high;
    }
};

int main(){
    Solution s;
    cout<<s.mySqrt(8)<<endl;
    return 0;
}