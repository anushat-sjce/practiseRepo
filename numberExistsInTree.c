int numberExists(struct Tree* tree, int num){
    if (tree->value == num) {
        return 1;
    } 
    if (tree == NULL){
        return 0;
    }
    else {
        int left = numberExists(tree->llink, num);
        int right = numberExists(tree->rlink, num);
        
        return left || right;        
    }
}
