//https://leetcode.com/problems/merge-nodes-in-between-zeros/description/?envType=daily-question&envId=2024-07-04

#include<bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head){
        ListNode* temp = head->next;
        ListNode* sumNode = temp;
        while(sumNode!=NULL){
            int sum=0;
            while(sumNode->val!=0){
                sum+=sumNode->val;
                sumNode = sumNode->next;
            }
            temp->val = sum;
            sumNode = sumNode->next;
            temp->next = sumNode;
            temp = temp->next;
        }
        return head->next;
    }
};

int main(){
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next->next->next->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next->next->next->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new ListNode(10);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new ListNode(11);
    head = s.mergeNodes(head);
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    return 0;
}