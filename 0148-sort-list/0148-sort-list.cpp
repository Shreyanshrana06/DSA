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
   ListNode* mergelist(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;

        while (list1 && list2) {
            if (list1->val > list2->val) {
                cur->next = list2;
                list2 = list2->next;
            } else {
                cur->next = list1;
                list1 = list1->next;
            }
            cur = cur->next;
        }

        cur->next = list1 ? list1 : list2;

        ListNode* head = dummy->next;
        delete dummy;
        return head;        
    }
    ListNode* sortList(ListNode* head) {
       
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        if(head == NULL || head->next == NULL){
            return head;
        }
        while(fast != NULL && fast->next != NULL ){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
       
    prev->next = NULL;
     ListNode* left = head;
    ListNode* right = slow;
   
    left = sortList(left);
        right = sortList(right);
        
        return mergelist(left,right);
        }
          
        

};