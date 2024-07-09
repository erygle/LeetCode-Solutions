//https://leetcode.com/problems/average-waiting-time/description/?envType=daily-question&envId=2024-07-09

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans = 0;
        double time = customers[0][0] + customers[0][1];
        if(customers.size()==1)return time - customers[0][0];
        ans+=time - customers[0][0];
        for(int i=1; i<customers.size() ; i++){
            if(time >= customers[i][0]){
                time += customers[i][1];
                ans+= time - customers[i][0];
            }else{
                time = customers[i][0] + customers[i][1];
                ans += time - customers[i][0];
            }
        }
        return ans/customers.size();
    }
};

int main(){
    Solution s;
    vector<vector<int>> v = {{1,2},{2,5},{4,3}};
    cout<<s.averageWaitingTime(v);
    return 0;
}
