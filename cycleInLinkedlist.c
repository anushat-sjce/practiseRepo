#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode{
    int val ;
    struct ListNode* next;
};

struct ListNode* head = NULL;
bool flag = false;

struct ListNode* createNode(int value){
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (n1 == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        n1->val = value;
        n1->next = NULL;
    }
    
    return n1;
}

void insertNode(struct ListNode* n1){
    struct ListNode* tmp = head;
    if (tmp == NULL) {
        head = n1;
    } else {
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = n1;
    }
}

void display(struct ListNode* head){
    struct ListNode* tmp = head;
    while(tmp != NULL){
        printf("value : %d\n",tmp->val);
        tmp = tmp->next;
    }
}

void createCycle(struct ListNode* head){
    struct ListNode* tmp = head;
    struct ListNode* cycle = head;
    
    tmp = tmp->next;
    cycle = tmp->next;
    cycle->next = tmp;
}

bool isCycle(struct ListNode* head){
    struct ListNode* slow = head->next;
    struct ListNode* fast = head;

    while(slow != fast){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    if (slow == fast){
        flag = true;
        return flag;
    } else {
        flag = false;
        return flag;
    }
}

int main() {
    struct ListNode* ptr1 = createNode(10);
    struct ListNode* ptr2 = createNode(20);
    struct ListNode* ptr3 = createNode(30);
    struct ListNode* ptr4 = createNode(40);
    
    insertNode(ptr1);
    insertNode(ptr2);
    insertNode(ptr3);
    insertNode(ptr4);
    
    display(head);
    
    createCycle(head);
    
    //display(head);
    bool k = isCycle(head);
    if(k){
        printf("cycle present\n");
    }else {
        printf("no cycle present\n");
    }
    
    return 0;
}
