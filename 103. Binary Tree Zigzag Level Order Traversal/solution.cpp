//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>arr;
        if(!root)return arr;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>v;
            for(int i=0 ; i<n ; i++){
                auto node = q.front();
                v.push_back(node->val);
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            arr.push_back(v);
        }
        for(int i=1 ; i<arr.size() ; i+=2){
            reverse(arr[i].begin(),arr[i].end());
        }
        return arr;
    }
};

int main(){
    Solution s;
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>>ans = s.zigzagLevelOrder(root);
    for(auto x : ans){
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}
