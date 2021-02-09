/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int key) {
    if(root == NULL){
        return false;
    }
     if(root->val==key)
        return true;
    if(root->val < key)
     return solve(root->right,key);
    // (root->val < val)
     return solve(root->left,key);
}
