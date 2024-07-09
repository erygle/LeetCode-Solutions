//https://leetcode.com/problems/symmetric-tree/description/
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
    bool sym(TreeNode *l,TreeNode *r){
        if(l==NULL && r==NULL)return true;
        if(l==NULL || r==NULL)return false;
        return (l->val == r->val) && sym(l->left,r->right) && sym(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        return sym(root->left,root->right);
    }
};

int main(){
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    cout<<s.isSymmetric(root);
    return 0;
}
