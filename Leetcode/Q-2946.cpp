/*


------- using extra memory soulution ----
TC = O n*m
sc = O n*m
class Solution {
public:
int leftShift (int idx, int k, int n) {
    idx = (idx - k + n) % n;
    return idx;
}

int rightShift (int idx, int k, int n) {
    idx = (idx+k) % n;
    return idx;
}
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> mat2(mat.size(), vector<int>(mat[0].size(), 0));
        k = k % mat[0].size();

        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (i % 2 == 0) {
                    int idx = leftShift(j , k, mat[0].size());
                    mat2[i][idx] = mat[i][j];
                }
                else  {
                    int idx = rightShift(j , k, mat[0].size());
                    mat2[i][idx] = mat[i][j];
                }
            }
        }
        return mat == mat2;
    }
};

*/