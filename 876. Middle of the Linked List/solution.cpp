//https://leetcode.com/problems/middle-of-the-linked-list/description/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution sol;
    ListNode *res = sol.middleNode(head);
    cout<<res->val;
    return 0;
}