/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *slow=head;
        ListNode *fast=head;
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        int x=k-1;
        while(x--)
        {
            slow=slow->next;
        }
        x=count-k;
        while(x--)
        {
            fast=fast->next;
        }
        swap(slow->val,fast->val);
        return head;
    }
};