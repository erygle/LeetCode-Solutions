//https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/description/?envType=daily-question&envId=2024-07-16
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool find(TreeNode* root, int v, string &st){
        if(root->val==v)return true;
        if(root->left && find(root->left,v,st))st.push_back('L');
        else if(root->right && find(root->right,v,st))st.push_back('R');
        return !st.empty();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string s,d;
        find(root,startValue,s);
        find(root,destValue,d);
        while(!s.empty() && !d.empty() && s.back()==d.back()){
            s.pop_back();
            d.pop_back();
        }
        return string(s.size(),'U')+string(rbegin(d),rend(d));
    }
};

int main(){
    //root = [5,1,2,3,null,6,4], startValue = 3, destValue = 6
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->right->right = new TreeNode(6);
    root->left->right = new TreeNode(4);
    Solution sol;
    cout << sol.getDirections(root, 3, 6) << endl;
    return 0;

}