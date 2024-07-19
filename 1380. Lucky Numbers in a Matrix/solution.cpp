//https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/?envType=daily-question&envId=2024-07-19
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        int m=matrix.size(),n=matrix[0].size();
        vector<int> rowMin(m,INT_MAX),colMax(n,INT_MIN);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rowMin[i]=min(rowMin[i],matrix[i][j]);
                colMax[j]=max(colMax[j],matrix[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==rowMin[i] && matrix[i][j]==colMax[j])res.push_back(matrix[i][j]);
            }
        }
        return res;
    }
};

int main(){
    vector<vector<int>> matrix={{3,7,8},{9,11,13},{15,16,17}};
    Solution sol;
    vector<int> res=sol.luckyNumbers(matrix);
    for(int i:res)cout<<i<<" ";
    return 0;
}