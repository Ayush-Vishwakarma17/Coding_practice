/*
------------ BFS approach to solve this problem using a counter variable -----------
counter variable make us to take decision of reversing the array or not ------------


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL) {
            return result;
        }
        queue<TreeNode *>q;
        q.push(root);
        int count = 1;
        result.push_back({root->val});
        while (!q.empty()) {
            int size = q.size();
            vector<int> nums;
            while (size--) {
                TreeNode * node = q.front(); q.pop();
                if (node -> left) {
                    q.push(node -> left);
                    nums.push_back(node -> left -> val);
                }
                if (node -> right) {
                    q.push(node -> right);
                    nums.push_back(node -> right -> val);
                }
            }
            count++;
            if (count % 2 == 0) {
                reverse(nums.begin(), nums.end());
            }
            if (!nums.empty()) {
                result.push_back(nums);
            }
        }
        return result;
    }
};

*/