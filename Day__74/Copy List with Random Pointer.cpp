class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>res;
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
            res[curr]=new Node(curr->val);
        }
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
            Node *clone=res[curr];
            clone->next=res[curr->next];
            clone->random=res[curr->random];
        }
        Node *head2=res[head];
        return head2;
    }
};