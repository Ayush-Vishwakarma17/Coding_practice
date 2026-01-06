/*

BFS approach of Leetcode Q 1161


class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);

        int maxSum = INT_MIN;
        int resultLevel = 0;
        int currLevel = 1;
        while (!que.empty()) {

            int n = que.size();
            int sum = 0;

            while (n--) {
                TreeNode* temp = que.front();
                que.pop();
                
                sum += temp->val;
                
                if (temp->right) {
                    que.push(temp->right);
                }
                if (temp->left) {
                    que.push(temp->left);
                }

            }
            if (sum > maxSum) {
                maxSum = sum;
                resultLevel = currLevel;
            }
            currLevel++;
        }
        return resultLevel;
    }
};


*/