/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 typedef struct ListNode Node;
Node* reverseList(Node* head) {
    Node *curr = head;
    Node* prev = NULL;
    Node* plus;
    while(curr!= NULL){
        plus = curr->next;
        curr->next = prev;
        prev = curr;
        curr = plus;
    }
    return prev;


}
