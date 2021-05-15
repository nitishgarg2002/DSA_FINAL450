// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    int addONE(Node *head) {
        if(head->next==NULL) {
            head->data=head->data+1;
            if(head->data>=10) {
                head->data=head->data%10;
                return 1;
            }
            else{
                return 0;
            }
            
        }
        else {
            head->data=head->data+addONE(head->next);
            if(head->data>=10){
                head->data=head->data%10;
                return 1;
            }
            else {
                return 0;
            }
        }
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if(head->next==NULL) {
            head->data=head->data+1;
            return head;
        }
        else{
            head->data=head->data+addONE(head->next);
            return head;
        }
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends