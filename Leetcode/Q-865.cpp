/*

solution for getting the deepest node with LCA!

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
class Solution {
public:

    int maxDepth = 0;
    int currentDepth = 0;

    int findmaxDepth (TreeNode* root,int currentDepth) {
        if (root == NULL) {
            return 0;
        }

        maxDepth = max(maxDepth, currentDepth);

        int leftTree = findmaxDepth(root->left, currentDepth+1);
        int rightTree = findmaxDepth(root->right, currentDepth+1);

        return maxDepth;
    }

    TreeNode* findNode(TreeNode* root, int depth) {
        if (root == NULL) {
            return NULL;
        }

        if (maxDepth == depth) {
            return root;
        }

        TreeNode* leftp = findNode(root->left, depth+1);
        TreeNode* rightp = findNode(root->right, depth+1);

        if (leftp != NULL && rightp != NULL) {
            return root;
        }
        if (leftp != NULL) {
            return leftp;
        }
        return rightp;
    }
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {

        maxDepth = findmaxDepth(root, 0);
        return findNode(root,  0);
        
    }
};



*/