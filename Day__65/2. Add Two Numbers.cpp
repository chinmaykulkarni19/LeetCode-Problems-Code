class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
       
       ListNode* dummy = new ListNode(-1);
       ListNode* x = dummy;
       while(carry || l1 || l2)
       {
           int num = 0;
           
           if(l1)
           {
               num += l1->val;
               l1 = l1->next;
           }
           if(l2)
           {
               num += l2->val;
               l2 = l2->next;
           }
           
           num += carry;
           
           carry = num/10;
           
           ListNode *temp = new ListNode(num%10);
           x->next = temp;
           x = temp;
       }
       
       return dummy=dummy->next;
    }
};