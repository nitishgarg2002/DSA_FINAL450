void morrisTraversal(Node *root) {
    Node *curr=root;
    Node *pre;
    while(curr!=NULL) {
    if(curr->left==NULL) {
        cout<<curr->data;
        curr=curr->right;
    }
    else {
    pre=curr->left;
    while(pre->right!=NULL && pre->right!=curr) {
        pre=pre->right;
    }
    if(pre->right==NULL) {
        pre->right=curr;
        curr=curr->left;
    }
    else {
        pre->right=NULL;
        cout<<curr->data;
        curr=curr->right;
    }
    }
    }
    
}