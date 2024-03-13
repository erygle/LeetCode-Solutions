//https://leetcode.com/problems/binary-tree-inorder-traversal/description/
#include <bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    void order(TreeNode* root,vector<int>&arr){
        if(root==NULL)return;
        order(root->left,arr);
        arr.push_back(root->val);
        order(root->right,arr);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>arr;
        order(root,arr);
        return arr;
    }
};
int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> ans = s.inorderTraversal(root);
    for(auto k: ans)cout<<k<<" ";
    return 0;
}
