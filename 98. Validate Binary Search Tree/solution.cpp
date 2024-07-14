//https://leetcode.com/problems/validate-binary-search-tree/description/
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
    bool order(TreeNode* root,long long min,long long max){
        if(root==NULL)return true;
        if(root->val>min && root->val<max){
            return order(root->left,min,root->val) && order(root->right,root->val,max);
        }
        else return false; 
    }
    bool isValidBST(TreeNode* root) {
        long long min=pow(2,31)*(-1)-1;
        long long max=pow(2,31)+1;
        bool check = order(root,min,max);
        return check;   
    }
};
int main(){
    Solution s;
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(6);
    cout<<s.isValidBST(root)<<endl;
    return 0;
}