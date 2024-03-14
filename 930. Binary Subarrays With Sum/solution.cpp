//https://leetcode.com/problems/binary-subarrays-with-sum/description/?envType=daily-question&envId=2024-03-14
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int sum = 0;
        int ans = 0;
        unordered_map<int,int> m;
        m[0] = 1;
        for(int i=0 ; i<n ; i++){
            sum+=nums[i];
            if(m.find(sum-goal)!=m.end()){
                ans+=m[sum-goal];
            }
            m[sum]++;
        }
        return ans;
    }
};
/*sliding window
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int sum = 0;
        int ans = 0;
        int left = 0;
        int right = 0;
        int count = 0;
        while(right<n){
            sum+=nums[right];
            while(left<right && sum>goal){
                sum-=nums[left];
                left++;
            }
            if(sum==goal){
                count = 0;
                while(left<n && nums[left]==0){
                    count++;
                    left++;
                }
                ans+=count+1;
            }
            right++;
        }
        return ans;
    }
};
*/

int main(){
    Solution s;
    vector<int> g = {1,0,1,0,1};
    cout<<s.numSubarraysWithSum(g,2)<<endl;
    return 0;
}