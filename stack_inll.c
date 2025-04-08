/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// C program to illustrate
// stacks using linked list()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    int value ;
    struct NODE* next;
} NODE;

NODE* head = NULL;

NODE* createNode(int value){
    NODE* n1 = (NODE *)malloc(sizeof(NODE));
    n1->value = value;
    n1->next = NULL;
    return n1;
}

void push(NODE *n){
    if (head == NULL) {
        n->next = NULL;
        head = n;
    } else {
        n->next = head;
        head = n;
    }
}

void display(){
    NODE* tmp ;
    tmp = head;
    while(tmp != NULL){
        printf("%d\n",tmp->value);
        tmp = tmp->next;
    }
}

void pop() {
    if (head == NULL){
        printf("no element\n");
    } else {
        printf("element popped %d\n",head->value);
        head = head->next;
    }
}

int main()
{
   NODE* n1 = createNode(10);
   NODE* n2 = createNode(20);
   NODE* n3 = createNode(30); 
   push(n1);
   push(n2);
   push(n3);
   
   display();
   pop();   
   pop();
   display();
   return 0;
   
}
