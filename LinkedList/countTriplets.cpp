int Pairs(Node *first,Node *second,int value) {
    int count=0;
    while(first!=NULL && second!=NULL && first!=second && second->next!=first) {
        if(first->data+second->data==value) {
            count++;
            first=first->next;
            second=second->prev;
        }
        else if(first->data+second->data<value){
            first=first->next;
        }
        else {
            second=second->prev;
        }
    }
    return count;
}

int triplets(Node *head,int x) {
    if(head==NULL) return 0;
    Node *first=head;
    Node *second=head;
    int count=0;
    while(second->next!=NULL) {
        second=second->next;
    }
    for(Node *current = head; current != NULL; current = current->next ){
        first=current->next;
        count += Pairs(first, second, x - current->data);
    }
    return count;
}