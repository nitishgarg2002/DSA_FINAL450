#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};

void postOrderRecursive(Node *root) {
    if(root==NULL) return;
    else{
        postOrderRecursive(root->left);
        postOrderRecursive(root->right);
        cout<<root->data;
    }
}

void postOrderIterative(Node *root) {
    if(root==NULL) return;
    else {
        stack<Node*> s;
        stack<int> out;
        s.push(root);
        while(!s.empty()){
               Node* curr = s.top();
        s.pop();
 
        out.push(curr->data);
        if (curr->left) {
            s.push(curr->left);
        }
 
        if (curr->right) {
            s.push(curr->right);
        }
    }
    while (!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
    }
        }
    }
