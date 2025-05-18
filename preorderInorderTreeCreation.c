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

struct Node* buildTree(int preorder[], int inorder[], int inStart, int inEnd, int *preIndex){
    
    if(inStart > inEnd){
        return NULL;
    }
    struct Node* n = createNode(preorder[*preIndex]);   
    (*preIndex)++;
    
    if(inStart == inEnd){
        return n;
    }
    
    int inIndex = searchNode(inorder, inStart, inEnd, n->data);
    n->left = buildTree(preorder, inorder, inStart, inIndex-1, preIndex );
    n->right = buildTree(preorder, inorder, inIndex+1, inEnd, preIndex);
    
    return n;
}

int main() {
    int preorder[] = {3, 9, 20, 15, 7};
    int inorder[] = {9, 3, 15, 20, 7};
    int preindex = 0;
    
    int size = sizeof(inorder)/sizeof(inorder[0]);
    printf("Size : %d\n", size);
    
    struct Node* root = buildTree(preorder, inorder, 0, size-1, &preindex);
    
    inOrderDisplay(root);
    
    return 0;
}
