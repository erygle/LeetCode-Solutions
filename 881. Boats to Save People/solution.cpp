//https://leetcode.com/problems/boats-to-save-people/description/?envType=daily-question&envId=2024-05-01
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& p, int lim) {
        sort(p.begin(),p.end());
        int ans=0;
        int i=0;
        int j = p.size()-1;
        while(i<=j){
            if(p[i]+p[j]>lim){
                j--;
                ans++;
            }
            else if(p[i]+p[j]<=lim){
                i++;
                j--;
                ans++;
            }
            else if(i==j){
                if(p[i]<=lim)ans++;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> v = {3, 2, 2, 1};
    cout<<s.numRescueBoats(v,3)<<endl;
    return 0;
}
