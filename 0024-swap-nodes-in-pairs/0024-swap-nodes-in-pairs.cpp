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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
    return head;
        ListNode* first=head;
        ListNode* second=first->next;
        ListNode dummy(0);
dummy.next = head;
ListNode* prev = &dummy;
        
        while(first != NULL && second != NULL){
              ListNode* nextptr=second->next;
              prev->next=second;
              second->next=first;
              first->next=nextptr;

              prev=first;
              first=nextptr;
              if(first!=NULL){
                second=first->next;
              }
        }
     return dummy.next;
    }
};