class Solution {
public:
    bool twoMirrored(TreeNode const * a, TreeNode const * b) {
        if (!a || !b) return !a && !b;
        return a->val == b->val && twoMirrored(a->left, b->right) && twoMirrored(a->right, b->left);        
    }
    bool isSymmetric(TreeNode* root) {
        return !root || twoMirrored(root->left, root->right);
    }
};
