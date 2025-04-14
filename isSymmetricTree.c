bool isSymm(struct TreeNode* t1, struct TreeNode* t2){
    if((t1 == NULL) && (t2 == NULL)){
        return 1;
    } else if ((t1 == NULL) || (t2 == NULL)){
        return 0;
    } 
    
    return (t1->val == t2->val) && (isSymm(t1->left, t2->right)) && (isSymm(t1->right,t2->left));
}
 
 
bool isSymmetric(struct TreeNode* root) {
    bool k = false;
    if (root == NULL){
        return true;
    } else {
        struct TreeNode* t1 = root->left;
        struct TreeNode* t2 = root->right;
        
        k = isSymm(t1, t2);
        printf("Tree is : %d\n", k);
    }
    return k;
}
