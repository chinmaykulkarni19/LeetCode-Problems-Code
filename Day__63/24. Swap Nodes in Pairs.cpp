class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *prev=head;
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
           return head;
        ListNode *curr=head->next->next;
        head=head->next;
        head->next=prev;
        while(curr!=NULL && curr->next!=NULL)
        {
            prev->next=curr->next;
            prev=curr;
            ListNode *next=curr->next->next;
            curr->next->next=curr;
            curr=next;
        }
        prev->next=curr;
        return head;
    }
};