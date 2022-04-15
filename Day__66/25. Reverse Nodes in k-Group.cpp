class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        for(int i=0;i<k;i++)
        {
            if(temp==NULL)
                return head;
            temp=temp->next;
        }
        
        ListNode *curr=head;
        ListNode *forward=NULL;
        ListNode *prev=NULL;
        int count=0;
        while(curr!=NULL && count<k)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL)
        {
            head->next=reverseKGroup(forward, k);
            
        }
        return prev;
    }
};