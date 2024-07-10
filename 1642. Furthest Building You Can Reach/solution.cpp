//https://leetcode.com/problems/furthest-building-you-can-reach/description/?envType=daily-question&envId=2024-07-10
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int n = heights.size();
        for(int i=0 ; i<n-1 ; i++){
            int diff = heights[i+1]-heights[i];
            if(diff>0){
                pq.push(-diff);
                if(pq.size()>ladders){
                    bricks += pq.top();
                    pq.pop();
                }
                if(bricks<0)return i;
            }
        }
        return n-1;
    }
};

int main(){
    Solution s;
    vector<int> heights = {4,2,7,6,9,14,12};
    int bricks = 5;
    int ladders = 1;
    cout<<s.furthestBuilding(heights,bricks,ladders);
    return 0;
}
