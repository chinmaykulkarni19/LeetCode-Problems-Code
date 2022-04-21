class Solution {
public:
    ListNode* reverse(ListNode* head)
    {   if(head==NULL || head->next==NULL)
        return head;
        ListNode* head_head=reverse(head->next);
        ListNode* head_tail=head->next;
        head_tail->next=head;
        head->next=NULL;
     return head_head;
        
        
    }
    int getDecimalValue(ListNode* head) {
        int total=0,i=0;
        int x;
        ListNode *curr=reverse(head);
        
        while(curr!=NULL)
        {   
            x=curr->val;
            total=total+pow(2,i)*x;
            i++;
            curr=curr->next;
        }
        return total;
    }
};