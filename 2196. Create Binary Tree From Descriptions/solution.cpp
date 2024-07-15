//https://leetcode.com/problems/create-binary-tree-from-descriptions/description/?envType=daily-question&envId=2024-07-15
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_set<int> childrenSet;
        unordered_map<int, pair<int, int>> childrenHashmap;

        for (auto& desc : descriptions) {
            int parent = desc[0];
            int child = desc[1];
            bool isLeft = desc[2] == 1;

            if (childrenHashmap.find(parent) == childrenHashmap.end()) {
                childrenHashmap[parent] = { -1, -1 };
            }

            childrenSet.insert(child);
            if (isLeft) {
                childrenHashmap[parent].first = child;
            } else {
                childrenHashmap[parent].second = child;
            }
        }

        int headNodeVal;
        for (auto& [parent, children] : childrenHashmap) {
            if (childrenSet.find(parent) == childrenSet.end()) {
                headNodeVal = parent;
                break;
            }
        }

        return constructTree(headNodeVal, childrenHashmap);
    }

private:
    TreeNode* constructTree(int curNodeVal, unordered_map<int, pair<int, int>>& childrenHashmap) {
        TreeNode* newNode = new TreeNode(curNodeVal);
        if (childrenHashmap.find(curNodeVal) != childrenHashmap.end()) {
            auto& children = childrenHashmap[curNodeVal];
            if (children.first != -1) {
                newNode->left = constructTree(children.first, childrenHashmap);
            }
            if (children.second != -1) {
                newNode->right = constructTree(children.second, childrenHashmap);
            }
        }
        return newNode;
    }
};

int main(){
    Solution s;
    vector<vector<int>> descriptions = {{1}, {2, 3}, {4, 5, 6}, {7, 8, 9, 10}};
    TreeNode* root = s.createBinaryTree(descriptions);
    return 0;
}
