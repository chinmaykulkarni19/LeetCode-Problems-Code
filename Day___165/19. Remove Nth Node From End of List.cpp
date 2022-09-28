class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp=new ListNode();
        tmp->next=head;
        ListNode* slow=tmp;
        ListNode* fast=tmp;
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return tmp->next;
    }
};