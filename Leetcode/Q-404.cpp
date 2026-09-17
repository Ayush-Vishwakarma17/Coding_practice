/*

---------- BFS solution of left leaf node sum problem ----------------
 

class Solution {
public:
    bool valid(TreeNode *root) {
        if (!root -> left && !root -> right) {
            return true;
        }
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        if (!root->left && !root->right) {
            return 0;
        }
        int sum = 0;
        queue<TreeNode *> q;q.push(root);
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                TreeNode* node = q.front(); q.pop();
                if (node -> left) {
                    q.push(node -> left);
                    if (valid(node -> left)) {
                        sum += node->left->val;
                    }
                }
                if (node -> right) {
                    q.push(node -> right);
                }
            }
        }
        return sum;
    }
};

*/