#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int result = 0;
        int n = grid[0].size();
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] < 0) {
                    result++;
                }
            }
        }
        return result;
    }
};
int main() {
    Solution check;
    vector<vector<int>> grid = {
        {1,2,-1,-2},
        {1,2,-3,-4},
        {20,-1,20,-10},
    };
    int ans = check.countNegatives(grid);
    cout<<"total negative count is : "<<ans;
    return 0;
}