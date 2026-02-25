/*

--------- solution using 2D map + multiset + Queue ------------- 

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>result;
        map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode* ,pair<int, int>>> q;
        q.push(make_pair(root, make_pair(0,0)));
        while (!q.empty()) {
            pair<TreeNode* ,pair<int, int>> temp = q.front();q.pop();
            TreeNode* node = temp.first;
            int distance = temp.second.first;
            int level = temp.second.second;

            mp[distance][level].insert(node->val);
            if (node -> left) {
                q.push(make_pair(node -> left, make_pair(distance-1, level+1)));
            }
            if (node -> right) {
                q.push(make_pair(node -> right, make_pair(distance+1, level+1)));
            }
        }

        for (auto i: mp) {
            vector<int> temp;
            for (auto j : i.second) {
                
                for (auto val: j.second) {
                    temp.push_back(val);
                }
                
            }
            result.push_back(temp);
        }
        return result;
    }
};

*/