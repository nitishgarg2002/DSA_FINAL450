#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int data) {
        this->data=data;
        this->left=this->right=NULL;
    }
};

void inorderRecursive(Node *root) {
    if(root==NULL)
    return ;
    else{
    inorderRecursive(root->left);
    cout<<root->data;
    inorderRecursive(root->right);
    }
}
void inorderIterative(Node *root) {
    if(root==NULL) return ;
    
    else{
        stack<Node*> st;
        Node *curr=root;
        while(!st.empty() || curr!=NULL){
            if(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            } 
            else {
                curr=st.top();
                st.pop();
                cout<<curr->data;
                curr=curr->right;
            }
        }
        
    }
}
