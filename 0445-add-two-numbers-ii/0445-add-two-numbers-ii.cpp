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
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* curr1=l1;
     ListNode* curr2=l2;
     ListNode* prev1=NULL;
     ListNode* prev2=NULL;
   

     while(curr1!=NULL){
        ListNode* temp=curr1->next;
        curr1->next=prev1;
        prev1=curr1;
        curr1=temp;
     }
     while(curr2!=NULL){
        ListNode* temp=curr2->next;
        curr2->next=prev2;
        prev2=curr2;
        curr2=temp;
     }

     curr1 = prev1;
     curr2 = prev2;
     int carry=0;
     ListNode* ans=NULL;
 

     while(curr1!=NULL || curr2!=NULL || carry!=0){
        
        int sum=carry;
        if(curr1!=NULL){
            sum+=curr1->val;
            curr1=curr1->next;
        }
        if(curr2!=NULL){
            sum+=curr2->val;
            curr2=curr2->next;
        }
        carry=sum/10;

        ListNode* newnode=new ListNode(sum%10);
        newnode->next=ans;
        ans=newnode;
     }
return ans;
    }
};