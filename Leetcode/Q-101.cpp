/*

----------- solve it heheh proud of myself -------------
---------- BFS approach solution to solve this question ----------

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root->left && !root->right) {
            return true;
        } 
        if ((root ->left && !root->right) || (!root -> left && root->right)) {
            return false;
        }
        if (root -> left -> val != root -> right -> val) {
            return false;
        }
        queue<TreeNode* >q1; q1.push(root->left);
        queue<TreeNode* >q2; q2.push(root->right);
        
        while (!q1.empty() && !q2.empty()) {
            int size1 = q1.size(), size2 = q2.size();
            if (size1 != size2) {
                return false;
            }
            while (size1--) {
                TreeNode* node1 = q1.front();q1.pop();
                TreeNode* node2 = q2.front();q2.pop();
                if (node1 -> val != node2 -> val) {
                    return false;
                }
                //case 1 both have left and right child
                if ((node1 -> left && node1 -> right) && (node2 -> left && node2 -> right)) {
        if (node1 -> left -> val != node2 -> right -> val || node2 -> left -> val != node1 -> right -> val) {
                        return false;
                    }
                    q1.push(node1 -> left), q1.push(node1 -> right);                    
                    q2.push(node2 -> right), q2.push(node2 -> left);                    
                }

                //case 2 only left ya only right child
                else if ((node1 -> left && !node1 -> right) && (!node2 -> left && node2 -> right)) {
                    if (node1 -> left -> val != node2 -> right -> val) {
                        return false;
                    }
                    q1.push(node1 -> left), q2.push(node2 -> right);
                }
                else if ((!node1 -> left && node1 -> right) && (node2 -> left && !node2 -> right)) {
                    if (node1 -> right -> val != node2 -> left -> val) {
                        return false;
                    }
                    q1.push(node1 -> right), q2.push(node2 -> left);
                } 
                
                //case 3 jab node ka left ho aur doosre wale node ka bhi kewal left child he ho!
                //means no mirror condition match so we will return false
                else if ((!node1 -> left && !node1 -> right) && (!node2 -> left && !node2 -> right)) {
                    continue;
                }
                else {
                    return false;
                }
            }
        }
        if (!q1.empty() || !q2.empty()) {
            return false;
        }
        return true;
    }
};

*/