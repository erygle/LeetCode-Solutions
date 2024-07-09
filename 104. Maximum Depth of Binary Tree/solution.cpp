//https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int ld = maxDepth(root->left);
        int rd = maxDepth(root->right);
        return max(ld,rd)+1;
    }
};

int main(){
    Solution s;
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout<<s.maxDepth(root);
    return 0;
}
