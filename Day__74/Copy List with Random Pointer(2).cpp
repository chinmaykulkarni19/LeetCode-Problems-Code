class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node *next;
        Node *temp;
        for(Node *curr=head;curr!=NULL;)
        {
            next=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=next;
            curr=next;
        }
        for(Node *curr=head;curr!=NULL;curr=curr->next->next)
        {
            curr->next->random=(curr->random!=NULL)?(curr->random->next):NULL;
        }
        if(head==NULL)
            return head;
        Node *original=head;
        Node* copy=head->next;
        temp=copy;
        while(original && copy)
        {
            original->next=(original->next!=NULL)?(original->next->next):original->next;
            copy->next=(copy->next)?(copy->next->next):copy->next;
            original=original->next;
            copy=copy->next;
        }
        return temp;
    }
};