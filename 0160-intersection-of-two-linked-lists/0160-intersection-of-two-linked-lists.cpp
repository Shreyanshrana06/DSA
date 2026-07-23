/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int countA = 0;
        int countB = 0;
        while(tempA != NULL){
            tempA = tempA->next;
            countA++;
        }
        while(tempB != NULL){
            tempB = tempB->next;
            countB++;
        }
        int diff = abs(countA - countB);
        while(diff){
            if(countA>countB)
        headA = headA->next;
        else{
            headB = headB->next;
        }
        
        diff--; 
        }
        tempA = headA;
        tempB = headB;
        while(tempA != NULL && tempB !=NULL){
        if(tempA == tempB){
            return tempA;
        }
            tempA=tempA->next;
            tempB=tempB->next;
       
        }
        
        return NULL;
    }
};