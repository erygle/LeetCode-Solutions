//https://leetcode.com/problems/linked-list-cycle/description/?envType=daily-question&envId=2024-03-06
#include <bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    // vector<int> g = {1,2,3};
    // vector<int> c = {1,1};
    // cout<<s.findContentChildren(g,c)<<endl;
    return 0;
}