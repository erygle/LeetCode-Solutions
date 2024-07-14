//https://leetcode.com/problems/same-tree/description/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)return true;
        else if(p==NULL || q==NULL)return false;
        bool check;
        if(p->val == q->val){
            check = isSameTree(p->left,q->left);
            if(!check)return false;
            check = isSameTree(p->right,q->right);
            if(!check)return false;
        }
        else return false;
        return true;
    }
};
int main(){
    Solution s;
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    cout<<s.isSameTree(p,q)<<endl;
    return 0;
}