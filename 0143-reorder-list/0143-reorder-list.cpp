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
    void reorderList(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return;

        ListNode* ans = head;
        ListNode* prev = head;
        ListNode* curr = head;

        // Find length
        int count = 0;

        while(curr != NULL) {
            count++;
            curr = curr->next;
        }

        // Find middle
        curr = head;

        int mid = (count+1) / 2;

        for(int i = 1; i < mid; i++) {
            curr = curr->next;
        }

        // Separate the two halves
        prev = curr;
        curr = curr->next;

        prev->next = NULL;

        // Reverse second half
        prev = NULL;

        while(curr != NULL) {
            ListNode* temp = curr->next;

            curr->next = prev;

            prev = curr;
            curr = temp;
        }

        // Head of reversed second half
        ListNode* halfnode = prev;

        // Merge both halves
        ans = head;

        while(ans != NULL && halfnode != NULL) {

            ListNode* temp1 = ans->next;
            ListNode* temp2 = halfnode->next;

            ans->next = halfnode;
            halfnode->next = temp1;

            ans = temp1;
            halfnode = temp2;
        }
    }
};