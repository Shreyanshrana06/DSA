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
        ListNode* temp = head;
        ListNode* small_dummy = new ListNode(0);
        ListNode* large_dummy = new ListNode(0);
        ListNode* small = small_dummy;
        ListNode* large = large_dummy;
        while(temp != NULL){
            if(temp->val <x){
                small->next = temp;
                small = small->next;
            }
            else{
                large->next = temp;
                large = large->next;
            }
            
            temp = temp->next;
        }
        large->next = NULL;
        small->next = large_dummy->next;

return small_dummy->next;
    }
};