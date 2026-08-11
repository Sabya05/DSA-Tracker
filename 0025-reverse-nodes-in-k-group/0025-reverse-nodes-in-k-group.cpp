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
   
ListNode* reverseit(ListNode* first,ListNode* prev, int k){
    ListNode* curr=first;
    
    for(int i=0;i<k;i++){
        ListNode* temp=curr->next;
           curr->next = prev;
           prev = curr;
           curr = temp;

    }
    first->next=curr;
    return prev;
 
}

    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head == NULL)
    return NULL;

        ListNode* first=head;
        ListNode* dummy = new ListNode(0);
         dummy->next = head;
          ListNode* prev = dummy;

        
        while(first!=NULL){

            ListNode* kth = prev;

            for(int i = 0; i < k; i++) {
                kth = kth->next;

                if(kth == NULL)
                    return dummy->next;
            }
            
               ListNode* newfirst=reverseit(first,prev,k);
               prev->next=newfirst;
               prev=first;
               first=first->next;
            
        }
        return dummy->next;
    
    }
};