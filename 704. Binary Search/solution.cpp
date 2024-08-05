//https://leetcode.com/problems/binary-search/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = left + (right-left) / 2;
            if(nums[mid] == target)return mid;
            else if(nums[mid]<target)left = mid+1;
            else right = mid-1;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    Solution obj;
    int result = obj.search(nums, target);
    cout << "Index of target: " << result << endl;

    return 0;
}