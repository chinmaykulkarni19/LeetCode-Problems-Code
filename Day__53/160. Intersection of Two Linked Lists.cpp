class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode*>res;
        ListNode *curr1=headA;
        while(curr1!=NULL)
        {
            res.insert(curr1);
            curr1=curr1->next;
        }
        curr1=headB;
        while(curr1!=NULL)
        {
            if(res.find(curr1)!=res.end())
            {
                return curr1;
            }
            curr1=curr1->next;
        }
        return NULL;
    }
};