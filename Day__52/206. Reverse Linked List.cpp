class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *cur=head;
        while(cur!=NULL)
        {
            ListNode *temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
            
        }
        return prev;
    }
};