/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
        if (node == NULL)
        return 0;
        else
        return 1 + solve(node -> next);
}
