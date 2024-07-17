//https://leetcode.com/problems/delete-nodes-and-return-forest/description/?envType=daily-question&envId=2024-07-17
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> del(to_delete.begin(),to_delete.end());
        vector<TreeNode*> res;
        function<TreeNode*(TreeNode*)> dfs=[&](TreeNode* root)->TreeNode*{
            if(!root)return NULL;
            root->left=dfs(root->left);
            root->right=dfs(root->right);
            if(del.count(root->val)){
                if(root->left)res.push_back(root->left);
                if(root->right)res.push_back(root->right);
                return NULL;
            }
            return root;
        };
        if(!del.count(root->val))res.push_back(root);
        dfs(root);
        return res;
    }
};

int main(){
    //root = [1,2,3,4,5,6,7], to_delete = [3,5]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<int> to_delete={3,5};
    Solution sol;
    vector<TreeNode*> res=sol.delNodes(root,to_delete);
    for(auto node:res)cout << node->val << " ";
    return 0;
}