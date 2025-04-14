
bool isValidBST(struct TreeNode* root, int min, int max) {
   if (root == NULL) {
       return true;
   } else {
       if((root->val <= LONG_MIN) ||(root->val >= LONG_MAX)){
           return false;
       } 
       isValidBST(root->left, LONG_MIN, root->val);
       isValidBST(root->right, root->val, LONG->MAX);
   }
}
