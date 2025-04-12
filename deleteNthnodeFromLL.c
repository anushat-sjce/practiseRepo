#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* head = NULL;

struct ListNode* createNode(int value){
    struct ListNode* ptr = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (ptr == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        ptr->val = value;
        ptr->next = NULL;
        return ptr;
    }
}

void insertNode(struct ListNode* n1){
    struct ListNode* temp = NULL;
    temp = head;
    if(temp == NULL){
        head = n1;
    } else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n1;
    }
}

void display(struct ListNode* head){
    struct ListNode* temp = head;
    while(temp != NULL){
        printf("%d\n",temp->val);
        temp = temp->next;
    }
}

int removenthFromEnd(struct ListNode* head, int val){
    struct ListNode* temp = NULL;
    temp = head;
    struct ListNode* prev = NULL;
    struct ListNode* del = NULL;
    int counter = 0;
    int jump = 0;
    
    while(temp != NULL){
        printf("here %d\n",temp->val);
        temp = temp->next;
        counter = counter +1;
    }
    printf("count : %d\n", counter);
    
    if(counter < val){
        printf("Deletion not possible\n");
        return 0;
    } else if (counter == val){
        temp = head;
        head = head->next;
        free(temp);
        return 1;
    } else {
        int hop = counter - val;
        struct ListNode* temp = head;
        while((temp != NULL) && (jump < hop)){
            prev = temp;
            temp = temp->next;
            jump ++;
        }
        prev->next = temp->next;
        free(temp);
        return 1;
    }
}

int main(){
    
    struct ListNode* ptr1 = createNode(10);
    struct ListNode* ptr2 = createNode(20);
    struct ListNode* ptr3 = createNode(30);
    struct ListNode* ptr4 = createNode(40);
    struct ListNode* ptr5 = createNode(50);
    
    insertNode(ptr1);
    insertNode(ptr2);
    insertNode(ptr3);
    insertNode(ptr4);
    insertNode(ptr5);
    
    display(head);
    
    int k = removenthFromEnd(head,3);
    if (k == 1) {
        printf("Node deleted\n");
    } else {
        printf("Invalid node number\n");
    }
    
    display(head);
    return 0;
}
