//https://leetcode.com/problems/container-with-most-water/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area = 0;
        while(r>l){
            area = max(area,min(height[l],height[r]) * abs(r-l));
            if(height[r]>height[l])l++;
            else r--;
        }
        return area;
    }
};
int main(){
    Solution s;
    vector<int> v = {1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(v);
}
