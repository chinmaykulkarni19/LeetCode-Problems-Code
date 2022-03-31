class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *last=reverseList(head->next);
        ListNode *sec=head->next;
        sec->next=head;
        head->next=NULL;
        return last;
    }
};