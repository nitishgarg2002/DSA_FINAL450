struct compare {
    bool operator()(struct Node* p1, struct Node* p2)
    {
        return p1->data > p2->data;
    }
};
Node *sortKSorted(Node *head,int k) {
    if(head==NULL || head->next==NULL) {
        return head;
    }
   priority_queue<Node *, vector<Node*>, compare> pq;
    Node *newHead=NULL,last;
    for(int i=0;head!=NULL && i<=k;i++){
        pq.push(head);
        head=head->next;
    }
    while(pq.empty()==false) {
        if(newHead==NULL) {
            newHead=pq.top();
            last=newHead;
        }
        else{
            last->next=pq.top();
            lpq.top()->prev=last;
            last=pq.top();
        }
        pq.pop();
        if(head!=NULL) {
            pq.push(head);
            head=head->next;
        }

    }
    last->next;
    return newHead;
}