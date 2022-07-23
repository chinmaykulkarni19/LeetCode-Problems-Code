class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* left=new ListNode(-1);
        ListNode* right=new ListNode(-1);
        ListNode* lefttail=left;
        ListNode* righttail=right;
        
        while(head!=NULL)
        {
            if(head->val<x)
            {
                lefttail->next=head;
                lefttail=lefttail->next;
                
            }
            else
            {
                righttail->next=head;
                righttail=righttail->next;
            }
            head=head->next;
        }
        righttail->next=NULL;
        lefttail->next=right->next;
        
        return left->next;
    }
    
};