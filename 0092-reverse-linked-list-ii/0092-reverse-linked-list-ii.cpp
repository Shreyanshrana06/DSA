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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* revPrev = NULL;
        if(head == NULL || head->next==NULL){
            return head;
        }
       for(int i=1;i<left;i++){
        prev = curr;
        curr= curr->next;
       }
       ListNode* tail = curr;
       ListNode* end = prev;
       for(int i=0;i<right-left+1;i++){
        next = curr->next;

        curr->next = revPrev;

            revPrev = curr;

            curr = next;
        
       }
       if(left>1)
       end->next = revPrev;
       if(left == 1)
        head = revPrev;
       
    tail->next = curr;
        return head;
    }
};