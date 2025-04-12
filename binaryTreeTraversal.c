#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int val;
    struct Node* llink;
    struct Node* rlink;
};

struct Node* root = NULL;

struct Node* createNode(int val){
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    if(n1 == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        n1->val = val;
        printf("creating node : %d\n",n1->val);
        n1->llink = NULL;
        n1->rlink = NULL;
        
        return n1;
    }
}

void inOrderDisplay(struct Node* root){
    if (root == NULL){
        return;
    } else {
        inOrderDisplay(root->llink);
        printf("Inorder Node value : %d\n",root->val);
        inOrderDisplay(root->rlink);
    }
}

void preOrderDisplay(struct Node* root){
    if(root == NULL){
        return;
    } else {
        printf("PreOrder Node value : %d\n",root->val);
        preOrderDisplay(root->llink);
        preOrderDisplay(root->rlink);
    }
}

void postOrderDisplay(struct Node* root){
    if (root == NULL){
        return;
    } else {
        postOrderDisplay(root->rlink);
        postOrderDisplay(root->llink);
        printf("PostOrder Node value : %d\n",root->val);
    }
}

void freeNodes(struct Node* root){
    struct Node* left = root;
    struct Node* right = root;
    
    if(root == NULL){
        printf("empty tree");
        exit(0);
    } else {
        freeNodes(left->llink);
        free(root);
        freeNodes(right->rlink);
    }
}

int main(){
    struct Node* ptr1 = createNode(10);
    struct Node* ptr2 = createNode(20);
    struct Node* ptr3 = createNode(30);
    struct Node* ptr4 = createNode(40);
    struct Node* ptr5 = createNode(50);
    
    root = ptr1;
    
    ptr1->llink = ptr2;
    ptr1->rlink = ptr3;
    ptr2->llink = ptr4;
    ptr4->llink = ptr5;
    
    inOrderDisplay(root);
    
    preOrderDisplay(root);
    
    postOrderDisplay(root);
    
    freeNodes(root);
    
    inOrderDisplay(root);
    
    return 0;
}
