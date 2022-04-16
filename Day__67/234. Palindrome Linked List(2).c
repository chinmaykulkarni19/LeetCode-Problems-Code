class Solution {
public:
    ListNode *reverse(ListNode *head)
    {   if(head==NULL || head->next==NULL)
        return head;
        ListNode *rest_head=reverse(head->next);
        ListNode *rest_tail=head->next;
        rest_tail->next=head;
        head->next=NULL;
        return rest_head;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode *slow =head;
        ListNode *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        ListNode *rev=reverse(slow->next);
        ListNode *curr=head;
        while(rev!=NULL)
        {
            if(rev->val!=curr->val)
                return false;
            rev=rev->next;
            curr=curr->next;
        }
        return true;
        
    }
};