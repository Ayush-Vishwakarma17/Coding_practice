/*

class Solution {
public:
void FindNode (TreeNode* root, TreeNode* &node, int val) {
        if (root -> val > val) {
            if (root -> left != NULL) {
                FindNode(root -> left, node, val);
            }  
        }
        if (root -> val < val) {
            if (root -> right != NULL) {
                FindNode(root -> right, node, val);
            }  
        }
        if (root -> val == val) {
            node = root;
            return;
        }
}
    TreeNode* searchBST(TreeNode* root, int val) {
        

        TreeNode* node = NULL;
        FindNode(root, node, val);

        return node;
    }
};

*/