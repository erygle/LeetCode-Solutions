//https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/description/?envType=daily-question&envId=2024-07-20
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size(), m = colSum.size();
        vector<vector<int>> res(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                res[i][j] = min(rowSum[i], colSum[j]);
                rowSum[i] -= res[i][j];
                colSum[j] -= res[i][j];
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> rowSum = {3,8};
    vector<int> colSum = {4,7};
    vector<vector<int>> res = s.restoreMatrix(rowSum, colSum);
    for (auto x : res) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
}
