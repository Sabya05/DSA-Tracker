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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
      
        ListNode* curr1=head;
        for(int i=1;i<k;i++){
           curr1=curr1->next;
        }
        int nk=count-k;
        ListNode* curr2=head;
        for(int i=1;i<=nk;i++){
           curr2=curr2->next;
        }
       swap(curr1->val,curr2->val);
        return head;
    }
};