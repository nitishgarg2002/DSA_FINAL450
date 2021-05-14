struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *movetoFront(Node *head) {
    if(head==NULL || head->next==NULL) return head;
    Node *curr=head,*secLast=NULL;
    while(curr->next!=NULL){
        secLast=curr;
        curr=curr->next;
    }
    secLast->next=NULL;
    curr->next=head;
    return curr;
}