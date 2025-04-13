#include <stdio.h>
#include <stdlib.h>

struct Tree {
    int value;
    struct Tree* llink;
    struct Tree* rlink;
};

struct Tree* tree = NULL;

struct Tree* createNode(int val){
    struct Tree* n1 = (struct Tree*) malloc (sizeof(struct Tree));
    if (n1 == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        n1->value = val;
        n1->llink = NULL;
        n1->rlink = NULL;
        
        return n1;
    }
}

struct Tree* insertNode(struct Tree* tree, int val ){
    if (tree == NULL){
        return createNode(val);
    }
    
    if (val < tree->value){
        tree->llink = insertNode(tree->llink, val) ;
    } else {
        tree->rlink = insertNode(tree->rlink, val);
    }
    return tree;
}

void display(struct Tree* tree){
    if (tree == NULL){
        return ;
    } else {
        display(tree->llink);
        printf("%d\n", tree->value);
        display(tree->rlink);
    }
}

int main(){
    tree = insertNode(tree, 10);
    tree = insertNode(tree, 20);
    tree = insertNode(tree, 30);
    
    display(tree);
    
   // isBST(tree);
    
    return 0;
}
