#include <stdio.h>
#include <stdlib.h>

struct Tree{
    int value;
    struct Tree* llink;
    struct Tree* rlink;
};

struct Tree* tree = NULL;

struct Tree* createNode(int val){
    struct Tree* t1 = (struct Tree*)malloc(sizeof(struct Tree));
    
    if(t1 == NULL){
        printf("malloc failed\n");
        exit(0);
    } else {
        t1->value = val;
        t1->llink = NULL;
        t1->rlink = NULL;
        
        return t1;
    }
}

void display(struct Tree* tree){
    struct Tree* t = tree;
    if(t == NULL){
        return ;
    } else {
        display(t->llink);
        printf("%d\n",t->value);
        display(t->rlink);
    }
}

int calculateHeight(struct Tree* tree){
    struct Tree* t = tree;
    if(t == NULL){
        return 0;
    } else {
    int ldepth = calculateHeight(t->llink);
    int rdepth = calculateHeight(t->rlink);
    
    return (ldepth > rdepth)? ldepth+1 : rdepth+1;
    }
}


int main(){
    struct Tree* t1 = createNode(10);
    struct Tree* t2 = createNode(20);
    struct Tree* t3 = createNode(30);
    struct Tree* t4 = createNode(40);
    struct Tree* t5 = createNode(50);
    
    tree = t1;
    t1->llink = t2;
    t2->llink = t3;
    t3->llink = t4;
    t4->llink = t5;
    
    display(tree);
    
    int k = calculateHeight(tree);
    
    printf("k value : %d\n",k);
    
    return 0;
}
