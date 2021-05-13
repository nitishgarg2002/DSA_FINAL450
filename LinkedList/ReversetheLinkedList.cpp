#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
struct LinkedList {
    Node *head;
    LinkedList() {
        this->head=NULL;
    }
};

Node* reverse(Node *head) {
    Node *curr=head;
    Node *prev=NULL,*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node *reverseRecursive(Node *curr,Node*prev) {
    if(curr==NULL) return prev;
    Node *next=curr->next;
    curr->next=prev;
    return reverseRecursive(next,curr);
}