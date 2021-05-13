#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int data) 
    {
        this->data=data;
        this->left=this->right=NULL;
    }
};

void preorderRecursive(Node *root){
    if(root==NULL)
    return;
    else {
        cout<<root->data;
        preorderRecursive(root->left);
        preorderRecursive(root->right);
    }
}

void preOrderIterative(Node *root) {
    if(root==NULL) return;
    else{
     stack<Node*> st;
     st.push(root);
     while(!st.empty()){
         Node *curr = st.top();
         st.pop();
         cout<<curr->data;
           if(curr->right!=NULL){
             st.push(root->right);
         }
         if(curr->left!=NULL){
             st.push(root->left);
         }
       
     }
    }
    
}