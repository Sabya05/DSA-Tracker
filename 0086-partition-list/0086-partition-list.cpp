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
    ListNode* partition(ListNode* head, int x) {
       ListNode* curr=head; 
       ListNode* smalldummy=new ListNode(0);
       ListNode* largedummy=new ListNode(0);
       ListNode* temp1=smalldummy; 
       ListNode* temp2=largedummy;
       
       while(curr!=NULL){
        if(curr->val<x){
            temp1->next=curr;
            temp1=temp1->next;
        }else{
            temp2->next=curr;
            temp2=temp2->next;
        }
        curr=curr->next;
       }
       temp1->next=largedummy->next;
       temp2->next=NULL;
       return smalldummy->next;
    }
};