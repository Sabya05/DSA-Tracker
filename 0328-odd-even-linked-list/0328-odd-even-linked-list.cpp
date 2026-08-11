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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* curr=head->next->next;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evennext=even;
        int i=3;
        while(curr!=NULL){
            if(i%2!=0){
                odd->next=curr;
                odd=odd->next;
               
            }else{
                even->next=curr;
                even=even->next;
               
            }
            curr=curr->next;
            i++;

        }
        even->next=NULL;
        odd->next=evennext;
        return head;
    }
};