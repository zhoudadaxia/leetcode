/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
static const auto _____ = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *tail = head;
        
        int carry = 0;
        while(l1 || l2 || carry){
            int n = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            tail -> next = new ListNode(n % 10);
            carry = n / 10;
            tail = tail -> next;
            l1 = l1?l1 -> next:NULL;
            l2 = l2?l2 -> next:NULL;
        }
        return head -> next;
    }
};
