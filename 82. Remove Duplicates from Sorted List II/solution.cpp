//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/
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
        map<int,int>mp;
        ListNode *temp = head;
        while(temp){
            mp[temp->val]++;
            temp = temp->next;
        }
        ListNode *newHead = new ListNode();
        ListNode *tempHead = newHead;
        for(auto k = mp.begin() ; k!=mp.end() ; k++){
            if(k->second == 1){
                ListNode *node = new ListNode(k->first);
                tempHead->next = node;
                tempHead = tempHead->next;
            }
        }
        return newHead->next;
    }
};
int main(){
    Solution s;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next = new ListNode(5);
    ListNode *newHead = s.deleteDuplicates(head);
    while(newHead){
        cout<<newHead->val<<" ";
        newHead = newHead->next;
    }
    return 0;
}