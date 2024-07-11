//https://leetcode.com/problems/find-peak-element/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& f) {
        
        int n;
        int s = f.size();
        if(s==1)return 0;
        for(int i=0 ; i<s ; i++){
            if(i==0 && f[i]>f[i+1]){
                n=i;
                break;
            }
            if(i==s-1 && f[i]>f[i-1]){
                n=i;
                break;
            }
            if(i>0 && i<s-1 && f[i]>f[i-1] && f[i]>f[i+1]){
                n=i;
                break;
            }
        }
        return n;
    }
};

int main(){
    Solution s;
    vector<int> f = {1,2,3,1};
    cout<<s.findPeakElement(f);
    return 0;
}