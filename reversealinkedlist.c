#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* head = NULL;

struct ListNode* createNode(int value){
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    if(n1 == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        n1->val = value;
        n1->next = NULL;
        return n1;
    }
}

void insertNode(struct ListNode* n1){
    struct ListNode* temp = head;
    
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
    struct ListNode* tmp = head;
    
    while(tmp != NULL){
        printf("%d\n",tmp->val);
        tmp = tmp->next;
    }
}

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* nex = NULL;
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    
    //temp = head;
    while (cur != NULL){
        nex = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nex;
    }
    head = prev;
    return head;
}

int main(){
    struct ListNode* ptr1 = createNode(10);
    struct ListNode* ptr2 = createNode(20);
    struct ListNode* ptr3 = createNode(30);
    struct ListNode* ptr4 = createNode(40);
    struct ListNode* ptr5 = NULL;
    
    insertNode(ptr1);
    insertNode(ptr2);
    insertNode(ptr3);
    insertNode(ptr4);
    
    display(head);
    
    ptr5 = reverseList(head);
    
    display(ptr5);
    
    return 0;
}



