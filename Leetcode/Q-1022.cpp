/*

-------------- i solved it using dfs + string to integer converstion -----------------


class Solution {
public:
void generateAll (TreeNode* root, vector<string> &s, string bits) {
    
    bits += (root -> val) + '0';
    if (!root -> left && !root -> right) {
        s.push_back(bits);
        return;
    }

    if (root -> left) {generateAll(root -> left, s, bits);}
    if (root -> right) {generateAll(root -> right, s, bits);}

    return;
}
    int sumRootToLeaf(TreeNode* root) {
        vector<string> s;
        string bits = "";
        int result = 0;
        generateAll(root, s, bits);
        for (auto bit : s) {
            int i = 0;
            while (!bit.empty()) {
                if (bit.back() == '0') {
                    result += 0;
                } else {
                    result += pow(2,i);
                }
                i++;
                bit.pop_back();
            }
        }
        return result;
    }
};



*/