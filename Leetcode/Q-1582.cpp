/*

--------------- Brute Approach --------------------

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int result = 0;
        for (int i = 0; i < m; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    continue;
                } 

                bool check = true;

                for (int r = 0; r < m; r++) {
                    if (r != i && mat[r][j] == 1) {
                        check = false;
                        break;
                    }
                }

                for (int c = 0; c < n; c++) {
                    if (c != j && mat[i][c] == 1) {
                        check = false;
                        break;
                    }
                }

                if (check) {
                    result++;
                }
                
            }
            if (count == 1) {
                result++;
            }
        }
        return result;
    }
};


*/