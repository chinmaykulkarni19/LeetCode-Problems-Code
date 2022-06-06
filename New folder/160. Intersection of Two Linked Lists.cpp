class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>res;
        ListNode *curr=headA;
        while(curr!=NULL)
        {
            res.insert(curr);
            curr=curr->next;
        }
        curr=headB;
        while(curr!=NULL)
        {
            if(res.find(curr)!=res.end())
            {
                return curr;
                
            }
            curr=curr->next;
        }
        return NULL;
        
    }
};