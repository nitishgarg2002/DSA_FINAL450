void pairWithSum(Node *head,int sum) {
    Node *second=head;
    Node *first=head;
    while(second!=NULL){
        second=second->next;
    }

    while(first!=second && second->next!=first) {
        if(first->data+second->data==x){
            cout<<first->data<<second->data<<"\n";
            first=first->next;
            second=second->prev;
        } 
        else if(first->data+second->data>x){
            second=second->prev;
        }
        else {
            first=first->prev;
        }
    }
}