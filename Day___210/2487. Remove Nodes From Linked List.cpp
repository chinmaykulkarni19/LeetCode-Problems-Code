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
    ListNode* removeNodes(ListNode* head) {
        vector<int>a;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(a.size()==0)
                a.push_back(temp->val);
            else{
                while(a.size() && temp->val>a.back())
                {
                    a.pop_back();
                    
                }
                a.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode* root=new ListNode(a[0]);
        ListNode* idx=root;
        for(int i=1;i<a.size();i++)
        {
            idx->next=new ListNode(a[i]);
            idx=idx->next;
        }
        return root;
    }
};