typedef struct ListNode Node;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp =  temp->next;
        count++;
    }
    printf("Working\n");
    count = count / 2;
    count++;
    temp = head;
    while(count >1){
        temp = temp->next;
        count--;
    }
    return temp;
    
}
