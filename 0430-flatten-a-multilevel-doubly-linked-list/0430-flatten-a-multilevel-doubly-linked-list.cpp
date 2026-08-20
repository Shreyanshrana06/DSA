/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
    
    if(head == NULL){
        return NULL;

    }
    Node* temp = head;

    while(temp !=NULL){
        if(temp->child !=NULL){
            Node* store = temp->next;
            Node* childHead = temp->child;
            Node* tail = flatten(childHead);
            while(tail->next !=NULL){
                tail=tail->next;
            }
            temp->next = childHead;
            childHead->prev = temp;
            temp->child = NULL;
            if(store != NULL){
                tail->next = store;
                store->prev = tail;
            } 
        
        }
        temp = temp->next;
    }
    return head;
    }
};