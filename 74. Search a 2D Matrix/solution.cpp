//https://leetcode.com/problems/search-a-2d-matrix/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix.size()-1;
        while(i>0){
            if(matrix[i][0]>target)i--;
            else break;
        }
        int r = matrix[i].size()-1;
        int l = 0;
        while(l<=r){
            int m = (l+r)/2;
            if(matrix[i][m]==target)return true;
            else if(matrix[i][m]>target)r=m-1;
            else l=m+1;
        }
        return false;
    }
};
int main(){
    Solution s;
    vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    cout<<s.searchMatrix(v,3);
    return 0;
}