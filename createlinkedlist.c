// Online C compiler to run C program online
//reverse the linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    int value;
    struct NODE* next;
} NODE;

NODE* head = NULL;

NODE* createNode(int num){
    NODE* ptr = (NODE*) malloc(sizeof(NODE));
    ptr->value = num;
    ptr->next = NULL;
    
    return ptr;
}
void insert(NODE* n1) {
    if (head == NULL) {
        head = n1;
    } else {
        NODE* p1 = head;
        while (p1->next != NULL) {
            p1 = p1->next;
        }
        p1->next = n1;
    }
}


void display(){
    NODE* ptr ;
    ptr = head;
    
    if(ptr == NULL){
        printf("no elements to display\n");
    }
    
    while(ptr != NULL){
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
}

void cleanup(NODE* ptr){
    NODE* temp ;
    while(ptr != NULL){
        temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
}

int main() {
    
    NODE* p1 = createNode(10);
    NODE* p2 = createNode(20);

    insert(p1);
    insert(p2);
    
    display();

    cleanup(head);
    return 0;
}
