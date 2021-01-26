bool solve(Tree* root, int target) {
    int key = target;
    
     if (root == NULL)
        return false;
 
    if (root->val == key)
        return true;
    bool res1 = solve(root->left, key);
    if(res1) return true; 

    bool res2 = solve(root->right, key);
 
    return res2;
}
