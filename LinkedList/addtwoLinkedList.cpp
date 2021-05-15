// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node *reverseL(Node *head){
        if(head==NULL) return NULL;
        Node *curr=head,*prev=NULL,*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
  void insert(Node* root, int item)
{
    Node* temp = new Node(item);
    Node* ptr;
    temp->data = item;
    temp->next = NULL;
  
    if (root == NULL)
        root = temp;
    else {
        ptr = root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node * head1=reverseL(first);
        Node *head2=reverseL(second);
        Node *curr1=head1,*curr2=head2;
        int flag=0;
        vector<int> res;
        while(curr1!=NULL || curr2!=NULL){
            
            int sum=0;
             sum = curr1->data+curr2->data+flag;
            if(sum>=10){
                sum=sum%10;
                flag=1;
            }
            else {
                flag=0;
            }
            res.push_back(sum);
            curr1=curr1->next;
            curr2=curr2->next;
        }
        while(curr1!=NULL) 
        {
            int sum =0;
            sum=curr1->data+flag;
             if(sum>=10){
                sum=sum%10;
                flag=1;
            }
            else {
                flag=0;
            }
            res.push_back(sum);
        }
          while(curr2!=NULL) 
        {
            int sum =0;
            sum=curr2->data+flag;
             if(sum>=10){
                sum=sum%10;
                flag=1;
            }
            else {
                flag=0;
            }
            res.push_back(sum);
        }
        reverse(res.begin(),res.end());
        

    Node *root = NULL;
    for (int i = 0; i < res.size(); i++)
    insert(root, res[i]);
   return root;

        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends