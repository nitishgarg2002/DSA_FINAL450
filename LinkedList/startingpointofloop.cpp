struct Node{
    int data;
    Node *next;
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
}

Node *startingPoint(Node *head) {
    Node* slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(slow==fast)
        break;
    }
    if(slow!=fast) return NULL;
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast= fast->next;
    }
    return slow;
}