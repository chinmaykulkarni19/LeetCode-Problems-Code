class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        
        ListNode* previt=NULL;
        ListNode* it=dummy;
        
        for(int i=0;i<left;i++)
        {
            previt=it;
            it=it->next;
        }
        ListNode* curr=it;
        ListNode* prev=previt;
        for(int i=left;i<=right;i++)
        {
            ListNode* Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        previt->next=prev;
        it->next=curr;
        return dummy->next;
    }
};