//https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)return NULL;
        if(head->next == NULL)return head;
        ListNode *prev = head;
        ListNode *curr = head->next;
        while(curr != NULL){
            if(prev->val == curr->val){
                prev->next = curr->next;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
int main(){
    Solution s;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);
    ListNode *newHead = s.deleteDuplicates(head);
    while(newHead){
        cout<<newHead->val<<" ";
        newHead = newHead->next;
    }
    return 0;
}