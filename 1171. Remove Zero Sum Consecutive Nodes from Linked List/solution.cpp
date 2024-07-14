//https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/description/?envType=daily-question&envId=2024-03-12
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        unordered_map<int, ListNode*> m;
        int prefix = 0;
        for (ListNode* i = dummy; i; i = i->next) {
            prefix += i->val;
            m[prefix] = i;
        }
        prefix = 0;
        for (ListNode* i = dummy; i; i = i->next) {
            prefix += i->val;
            i->next = m[prefix]->next;
        }
        return dummy->next;
    }
};
int main(){
    Solution s;
    // cout<<s.removeZeroSumSublists("cba","abcd")<<endl;
    return 0;
}