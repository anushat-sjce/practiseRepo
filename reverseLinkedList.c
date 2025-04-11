// Online C compiler to run C program online
//reverse the linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    int value;
    struct NODE* next;
} NODE;

NODE* head = NULL;

NODE* createNode(int val){
    NODE* n1 = (NODE*)malloc(sizeof(NODE));
    n1->value = val;
    n1->next = NULL;
    
    if(n1 == NULL){
        printf("malloc failed\n");
        return 0;
    }
    return n1;
}

void insertElement(NODE* n1){
    if(head == NULL){
        head = n1;
    }else {
        NODE* ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = n1;
    }
}

void display(){
    NODE* temp = head;
    if (temp == NULL){
        printf("No elements to display\n");
        return ;
    } else {
        while(temp != NULL){
            printf("%d\n", temp->value);
            temp = temp->next;
        }
    }
}

void cleanup(){
    NODE* temp = NULL;
    while(head != NULL){
        temp = head;
        head = head->next;
        printf("cleaning up %d\n",temp->value);
        free(temp);
    }
}

void reverseList(){
    NODE* prev = NULL;
    NODE* cur = head ;
    NODE* next = NULL;
    
   // prev = head;
    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}

int main (){
    NODE* p1 = NULL;
    p1 = createNode(10);
    NODE* p2 =NULL;
    p2 = createNode(20);
    NODE* p3 = NULL;
    p3 = createNode(30);

    insertElement(p1);
    insertElement(p2);
    insertElement(p3);
    
    display();
   // cleanup();
    reverseList();
    display();
    cleanup();
    display();
}

/* sudo code
cur = head;
prev = null;
next = null;
while(cur != head){
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
}
head = prev
*/
