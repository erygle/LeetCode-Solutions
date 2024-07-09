//https://leetcode.com/problems/candy/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int candy(vector<int>& ratings) {
        int res=0;
        int n = ratings.size();
        vector<int>l(n,1);
        vector<int>r(n,1);
        for(int i=1 ; i<n ; i++){
            if(ratings[i]>ratings[i-1]){
                l[i] = l[i-1]+1;
            }
        }
        for(int i=n-2 ; i>=0 ; i--){
            if(ratings[i]>ratings[i+1]){
                r[i] = r[i+1]+1;
            }
        }
        for(int i=0 ; i<n ; i++){
            res += max(l[i],r[i]);
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int> ratings = {1,0,2};
    cout<<s.candy(ratings);
    return 0;
}
