//https://leetcode.com/problems/plus-one/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=0 ; i<n ; i++){
            if(digits[i]!=9)break;
            if(i==n-1){
                vector<int>arr(n+1,0);
                arr[0]=1;
                return arr;
            }
        }
        for(int i=n-1 ; i>=0 ; i--){
            if(digits[i] != 9){
                digits[i]++;
                break;
            }
            else{
                digits[i] = 0;
            }
        }
        return digits;
    }
};  
int main(){
    Solution s;
    vector<int> v = {1,2,3};
    vector<int> ans = s.plusOne(v);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}