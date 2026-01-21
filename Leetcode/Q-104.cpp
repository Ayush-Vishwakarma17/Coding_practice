/*


class Solution {
public:
    int maxDepth(TreeNode* root) {
        int height = 0;
        queue<TreeNode* >q;
        if (root == NULL) {return 0;}
        q.push(root);
        while (!q.empty()) {
            
            int size = q.size();
            
            while (size--) {
                TreeNode* node = q.front();
                q.pop();

                if (node -> left) {q.push(node->left);}
                if (node -> right) {q.push(node->right);}
            }
            height++;
            
        }
        return height;
    }
};

*/