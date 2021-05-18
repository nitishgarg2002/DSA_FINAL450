/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *curr=head;
        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        int n=(count%2==0) ? ((count/2)+1): (count+1)/2;
        
        while(--n){
            head=head->next;
            
        }
        return head;
    }
};