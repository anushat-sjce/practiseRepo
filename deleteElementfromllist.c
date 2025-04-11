#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int val ;
    struct ListNode* next;
};

struct ListNode* head = NULL;

struct ListNode* createNode(int value){
    struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    if(tmp == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        tmp->val = value;
        tmp->next = NULL;
    }
    return tmp;
}

void insertNode(struct ListNode* n1){
    struct ListNode* tmp = NULL;
    tmp = head;
    
    if(head == NULL){
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
    printf("hi\n");
    while(tmp != NULL){
        printf("%d\n",tmp->val);
        tmp = tmp->next;
    }
}

int delete(int value){
    struct ListNode* tmp = head;
    struct ListNode* prev = tmp;
    int flag = 0;
    
    if(tmp->val == value){
        printf("element found\n");
        head = tmp->next;
        return 1;
    } else {
        while(tmp != NULL) {
            if (tmp->val != value){
                prev = tmp;
                tmp = tmp->next;
                flag = 0;
                printf("came here\n");
            } else if(tmp->val == value){
                flag = 1;
                prev->next = tmp->next;
                free(tmp);
                return 1;
            } else {
                printf("anusha");
                return 0;
            }
        }
    }
}

int main(){
    
    int k = 0;
    
    struct ListNode* ptr1;
    struct ListNode* ptr2;
    struct ListNode* ptr3;
    
    ptr1 = createNode(10);
    ptr2 = createNode(20);
    ptr3 = createNode(30);
    
    insertNode(ptr1);
    insertNode(ptr2);
    insertNode(ptr3);

    display(head);    
    k = delete(40);
    
    display(head);
    
    if(k == 1){
        printf("Node deleted\n");
    } else {
        printf("Node not found\n");
    }
    return 0;
}
