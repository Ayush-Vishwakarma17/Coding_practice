/*

--------------------- recursive solution to solve this problem -----------------


class Solution {
public:
    int maxsum;
    int findSum(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int l = findSum(root->left);
        int r = findSum(root->right);

        int belowTree = l + r + root->val;
        int l_ya_r = max(l,r) + root -> val;
        int onlyroot = root->val;

        maxsum = max({maxsum, belowTree, l_ya_r, onlyroot});
        return max(l_ya_r, onlyroot);
    }
    int maxPathSum(TreeNode* root) {
        maxsum = INT_MIN;
        findSum(root);
        return maxsum;
    }
};

*/