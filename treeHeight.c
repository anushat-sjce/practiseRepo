int treeHeight(struct Tree* tree){
    if (tree == NULL){
        return 0;
    }   else {
        int lheight = 0;
        int rheight = 0;
        lheight =  treeHeight(tree->llink);
        rheight = treeHeight(tree->rlink);

        if (lheight > rheight) return lheight +1 ;
            else return rheight +1;
    }
}
