class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            length++;
            curr=curr->next;
        }
        curr=head;
        if(length==n)
            return head->next;
        length=length-n;
        length--;
        while(length--)
        {
            curr=curr->next;
            
        }
        curr->next=curr->next->next;
        return head;
        
    }
};