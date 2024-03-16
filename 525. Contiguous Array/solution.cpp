//https://leetcode.com/problems/contiguous-array/?envType=daily-question&envId=2024-03-16
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        int ans = 0;
        int sum = 0;
        m[0] = -1;
        for(int i=0 ; i<n ; i++){
            if(nums[i]==0){
                sum--;
            }else{
                sum++;
            }
            if(m.find(sum)!=m.end()){
                ans = max(ans,i-m[sum]);
            }else{
                m[sum] = i;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> g = {0,1,0};
    cout<<s.findMaxLength(g)<<endl;
    return 0;
}