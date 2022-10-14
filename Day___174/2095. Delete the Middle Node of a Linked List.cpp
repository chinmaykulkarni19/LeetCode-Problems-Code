class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* curr=head;
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            curr=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        curr->next=slow->next;
        delete slow;
        return head;
    }
};