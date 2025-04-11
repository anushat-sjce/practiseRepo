// Online C compiler to run C program online
// Creating cycled linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    int val;
    struct NODE* next;
}NODE;

NODE* head = NULL;

NODE* createNode(int value){
    NODE* temp = (NODE*)malloc(sizeof(NODE));
    if (temp == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        temp->val = value;
        printf("creating %d\n",temp->val);
        temp->next = temp;
    }
    return temp;
}

void insertNode(NODE* n1){
    NODE* temp = NULL;
    temp = head;
    
    if(temp == NULL){
        printf("inserting %d\n",n1->val);
        head = n1;
    } else {
        while(temp->next != head){
            printf("came here\n");
            temp = temp->next;
        }
        n1->next = temp->next;
        printf("inserting here %d\n",n1->val);
        temp->next = n1;
    }
}

void display(NODE* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    NODE* tmp = head;
    do {
        printf("val :%d\n", tmp->val);
        tmp = tmp->next;
    } while (tmp != head); // Stop when we reach the head again
}


int main(){
    NODE* ptr1 = createNode(10);
    NODE* ptr2 = createNode(20);
    NODE* ptr3 = createNode(30);
    
    insertNode(ptr1);
    insertNode(ptr2);
    insertNode(ptr3);
    
    display(head);
    
    return 0;
}
