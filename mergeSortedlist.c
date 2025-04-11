// Online C compiler to run C program online
// merge 2 sorted linked list.
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE1{
    int v1;
    struct NODE1* next1;
}NODE1;

NODE1* head1 = NULL;
NODE1* head3 = NULL;

typedef struct NODE2{
    int v2;
    struct NODE2* next2;
}NODE2;

NODE1* head2 = NULL;

NODE1* createNode1(int val){
    NODE1* p1 = (NODE1*)malloc(sizeof(NODE1));
    
    if(p1 == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        p1->v1 = val;
        p1->next1 = NULL;
    }
    return p1;
}

void insertNode1(NODE1* n1){
    NODE1* temp = head1;
    
    if(head1 == NULL){
        head1 = n1;
    } else {
        while(temp->next1 != NULL){
            temp = temp->next1;
        }
        temp->next1 = n1;
    }
}

void insertNode2(NODE1* n2){
    NODE1* temp = head2;
    
    if (head2 == NULL){
        head2 = n2;
    } else {
        while(temp->next1 != NULL){
            temp = temp->next1;
        }
        temp->next1 = n2;
    }
}


void displayOne(NODE1* head){
    NODE1* ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr->v1);
        ptr = ptr->next1;
    }
}
    
void send(int value1){
    NODE1* tmp = (NODE1*)malloc(sizeof(NODE1));
    if (tmp == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        tmp->v1 = value1;
        tmp->next1 = NULL;
        
        if(head3 == NULL){
            printf("here\n");
            head3 = tmp;
        } else { 
            NODE1* p = head3;
            while(p->next1 != NULL){
               // printf("%d\n",p->v1);
                p = p->next1;
            }
            p->next1 = tmp;
        }
    }
}

void mergeLists(NODE1* head1, NODE1* head2){
    NODE1* temp1 = NULL;
    NODE1* temp2 = NULL;
    int small = 0;
    
    temp1 = head1;
    temp2 = head2;
    
    while((temp1 != NULL) && (temp2 != NULL)){
        if((temp1->v1) <= (temp2->v1)){
            small = temp1->v1;
            printf("small is %d\n",small);
            send(small);
            temp1 = temp1->next1;
        } else {
            small = temp2->v1;
            printf("small is %d\n",small);
            send(small);
            temp2 = temp2->next1;
        }
    }
    while (temp1 != NULL){
        small = temp1->v1;
        printf("temp1 not null and small :%d\n",small);
        send(small);
        temp1 = temp1->next1;
    }

    while (temp2 != NULL){
        small = temp2->v1;
        printf("temp2 not null and small: %d\n",small);
        send(small);
        temp2 = temp2->next1;
    }
}

int main(){
    NODE1* ptr1 = createNode1(10);
    NODE1* ptr2 = createNode1(30);
    NODE1* ptr3 = createNode1(50);
    
    NODE1* ptr4 = createNode1(20);
    NODE1* ptr5 = createNode1(30);
    NODE1* ptr6 = createNode1(60);
    
    insertNode1(ptr1);
    insertNode1(ptr2);
    insertNode1(ptr3);
    
    insertNode2(ptr4);
    insertNode2(ptr5);
    insertNode2(ptr6);
    
    displayOne(head1);
    displayOne(head2);
    
    mergeLists(head1, head2);
    
    displayOne(head3);
    return 0;
}
