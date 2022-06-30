class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr=new ListNode(-1);
        curr->next=head;
        ListNode *curr1=curr;
        while(curr!=NULL && curr->next!=NULL)
        {
            if(curr->next->val==val)
            {
                curr->next=curr->next->next;
            }
            else
                curr=curr->next;
        }
        return curr1->next;
    }
};