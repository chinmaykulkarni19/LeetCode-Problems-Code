class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        for(ListNode *curr=head;curr!=NULL;curr=curr->next)
        {
            s.push(curr->val);
        }
        for(ListNode *curr=head;curr!=NULL;curr=curr->next)
        {
            if(s.top()!=curr->val)
                return false;
            s.pop();
        }
        return true;
    }
};