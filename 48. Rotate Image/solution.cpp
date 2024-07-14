//https://leetcode.com/problems/rotate-image/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        if(row == 1){
            return;
        }
        vector<vector<int>>repMatrix(row,vector<int>(col));
        int ni=0;
        for(int i=0 ; i<col ; i++){
            int nj=0;
            for(int j=row-1 ; j>=0 ; j--){
                repMatrix[i][nj] = matrix[j][i];
                nj++;
            }
        }
        matrix=repMatrix;
    }
};
int main(){
    Solution s;
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    s.rotate(v);
    for(auto x : v){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}