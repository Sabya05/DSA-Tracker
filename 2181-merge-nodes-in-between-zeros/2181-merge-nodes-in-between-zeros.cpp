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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* curr=head->next;
        while(curr!=NULL){
            int sum=0;
            while(curr != NULL && curr->val != 0){
            sum+=curr->val;
            curr=curr->next;
            }
        
            ListNode* sumval=new ListNode(sum);
            temp->next=sumval;
            temp=temp->next;
            curr=curr->next;
        }
        return head->next;
    }
};