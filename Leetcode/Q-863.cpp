
/*

---------- O of 2n solution to solve this problem just use a parent node pointer using map and after that!!

A simple dfs and insert the left right and parent node till k distance once you reach there 
push all the values to the answer array and return it!

class Solution {
public:

// this inorder traversal mere map me har ek child node ka parent node daal dega

void inorder(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent) {
    if (!root) {
        return;
    }

    if (root -> left) {
        parent[root->left] = root;
        inorder(root->left, parent);
    }

    if (root -> right) {
        parent[root->right] = root;
        inorder(root->right, parent);
    }

}

// this bfs traversal will make sure ki mera tree ek graph ki tarah behave karke distance node nikal le


    void bfs (TreeNode* target, vector<int>& result, int k, unordered_map<TreeNode*, TreeNode*>& parent) {
        queue<TreeNode* > q;
        q.push(target);
        set<int> visited;
        while (!q.empty()) {
            int size = q.size();
            
            if (k == 0) {
                break;
            }
            k--;
            while (size--) {
                TreeNode* node = q.front();
                visited.insert(node->val);
                q.pop();
                if (node->left != NULL && !visited.count(node -> left -> val)) {q.push(node -> left);}
                if (node->right != NULL && !visited.count(node -> right -> val)) {q.push(node -> right);}

                if (parent.count(node) && !visited.count(parent[node] -> val)) {
                    q.push(parent[node]);
                }
                
            }
        }
        while (!q.empty()) {
            int val = q.front()->val;
            q.pop();
            result.push_back(val);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;
        inorder(root, parent);
        vector<int> result;
        set<int> visited;
        bfs(target, result, k, parent);
        return result;
    }
};

*/