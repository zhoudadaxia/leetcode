    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        ListNode* pre = NULL;
        int carry = 0;
        while(l1 || l2){
            int v1 = l1 ? l1->val : 0;
            int v2 = l2 ? l2->val : 0;
            
            int cur = v1 + v2 + carry;
            int unit = cur % 10;
            carry = cur / 10;
            
            if(!result){
                result = new ListNode(unit);
                pre = result;
            } else {
                pre->next = new ListNode(unit);
                pre = pre->next;
            }
            
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
        }
        
        if(carry > 0){
            if(!result){
                result = new ListNode(carry);
            } else {
                pre->next = new ListNode(carry);
            }
        }
         
        return result;
    }
};
