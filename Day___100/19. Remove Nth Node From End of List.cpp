class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=new ListNode();
        temp->next=head;
        ListNode *slow=temp;
        ListNode *fast=temp;
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return temp->next;
        
    }
};