#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* head = NULL;

struct ListNode* createNode(int value){
    struct ListNode* temp = (struct ListNode*) malloc (sizeof(struct ListNode));
    
    if (temp == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        temp->val = value;
        temp->next = NULL;
    }
}

void insertNode(struct ListNode* node){
    struct ListNode* temp = head;
    if( temp == NULL){
        head = node;
        printf("inserting :%d\n",node->val);
    } else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node;
        printf("inserting :%d\n",node->val);
    }
}

void display(struct ListNode* head){
    struct ListNode* temp = head;
    
    while(temp != NULL){
        printf("%d\n",temp->val);
        temp = temp->next;
    }
}
bool flag = false;
bool isPalindrome(struct ListNode* head){
    int count = 0;
    int i = 0;
    int j = 0;
    
    struct ListNode* tmp = head;
    while(tmp != NULL){
        tmp = tmp->next;
        count++;
    }
    printf("No of elements: %d\n", count);
    if (count == 1){
        flag = 1;
        return flag;
    }
    
    int array[count];
    tmp = head;
    
    while(tmp != NULL){
        array[i] = tmp->val;
        printf("values in array[%d] is %d\n",i, array[i]);
        tmp = tmp->next;
        i++;
    }
    
    i = 0;
    j = count-1;
    
    while((i<count) && (i<=j)) {
        printf("%d and %d\n",i,j);
        if (array[i] == array[j]){
            printf("%d and %d\n",array[i], array[j]);
            i++;
            j--;
            flag = 1;
            printf("flag is 1\n");
        }else {
            flag = 0;
            printf("flag is 0\n");
            return flag;
        }
    }
    return flag ;
}

int main (){
  //  bool flag = false;
    struct ListNode* ptr1 = createNode(1);
    struct ListNode* ptr2 = createNode(2);
  //  struct ListNode* ptr3 = createNode(2);
    struct ListNode* ptr4 = createNode(1);
    
    insertNode(ptr1);
    insertNode(ptr2);
 //   insertNode(ptr3);
    insertNode(ptr4);
    
    display(head);
    
    flag = isPalindrome(head);
    if(flag){
        printf("linkedlist is a palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    
    return 0;
}
