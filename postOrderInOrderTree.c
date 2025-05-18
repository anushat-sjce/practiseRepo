// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int val){
    struct Node* n = (struct Node*) malloc (sizeof(struct Node));
    if (n == NULL){
        printf("Malloc failed\n");
        return NULL;
    }
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    
    return n;
}

void inOrderDisplay(struct Node* root){
    if (root == NULL){
        return ;
    } else {
        inOrderDisplay(root->left);
        printf("%d\n", root->data);
        inOrderDisplay(root->right);
    }
}

int searchNode(int a[], int inStart, int inEnd, int value){
    int i = 0;
    for(i = inStart; i < inEnd; i++ ){
        if (a[i] == value){
            return i;
        }
    }
    return -1;
}

struct Node* buildTree(int postorder[], int inorder[], int inStart, int inEnd, int *postIndex){
    
    if(inStart > inEnd){
        return NULL;
    }
    struct Node* n = createNode(postorder[*postIndex]);   
    (*postIndex)--;
    
    if(inStart == inEnd){
        return n;
    }
    
    int inIndex = searchNode(inorder, inStart, inEnd, n->data);
    n->left = buildTree(postorder, inorder, inStart, inIndex-1, postIndex );
    n->right = buildTree(postorder, inorder, inIndex+1, inEnd, postIndex);
    
    return n;
}

int main() {
    int postorder[] = {4, 2, 5, 1, 6, 3, 7};
    int inorder[] = {4, 5, 2, 6, 7, 3, 1};
    int postIndex = 0;
    
    int size = sizeof(inorder)/sizeof(inorder[0]);
    printf("Size : %d\n", size);
    
    postIndex = size - 1;
    struct Node* root = buildTree(postorder, inorder, 0, size-1, &postIndex);
    
    inOrderDisplay(root);
    
    return 0;
}
