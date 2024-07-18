//https://leetcode.com/problems/number-of-good-leaf-nodes-pairs/description/?envType=daily-question&envId=2024-07-18
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int countPairs(TreeNode* root, int distance) {
        int res=0;
        function<vector<int>(TreeNode*)> dfs=[&](TreeNode* root)->vector<int>{
            vector<int> dist(distance+1,0);
            if(!root)return dist;
            if(!root->left && !root->right){
                dist[1]=1;
                return dist;
            }
            vector<int> left=dfs(root->left),right=dfs(root->right);
            for(int i=1;i<=distance;i++){
                for(int j=1;j<=distance-i;j++){
                    res+=left[i]*right[j];
                }
            }
            for(int i=1;i<distance;i++)dist[i+1]=left[i]+right[i];
            return dist;
        };
        dfs(root);
        return res;
    }
};

int main(){
    //root = [1,2,3,null,4], distance = 3
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    int distance=3;
    Solution sol;
    cout << sol.countPairs(root,distance);
    return 0;
}