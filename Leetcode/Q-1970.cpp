#include<bits/stdc++.h>
using namespace std;

//Approach-2 (Binary Search + BFS)

/* class Solution {
public:
    int ROW;
    int COL;
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    bool bfs(vector<vector<int>> &grid, int i, int j) {
        
        queue<pair<int, int>> que;
        que.push({i, j});
        grid[i][j] = 1;
        
        while(!que.empty()) {
            
            auto temp = que.front();
            que.pop();
            
            int x = temp.first;
            int y = temp.second;
            
            if(x == ROW-1)
                return true;
            
            for(vector<int> & dir : directions) {
                
                int new_x = x + dir[0];
                int new_y = y + dir[1];
                
                if(new_x >= 0 && new_x < ROW && new_y >= 0 && new_y < COL && grid[new_x][new_y] == 0) {
                    que.push({new_x, new_y});
                    grid[new_x][new_y] = true;
                }
                
            }
            
        }
        
        return false;
    }
    
    bool canCross(vector<vector<int>>& cells, int day) {
        vector<vector<int>> grid(ROW, vector<int>(COL));
        
        for (int i = 0; i <= day; ++i) {
            int r = cells[i][0] - 1;
            int c = cells[i][1] - 1;
            
            grid[r][c] = 1;
        }
        
        for (int j = 0; j < COL; j++) {
            if (grid[0][j] == 0 && bfs(grid, 0, j)) {
                return true;
            }
        }
        return false;
        
    }
    
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        ROW = row;
        COL = col;
        
        int n = cells.size();
        
        int l = 0;
        int r = cells.size()-1;
        int lastDay = 0;
        
        while( l <= r) {
            
            int mid = l + (r-l)/2;
            
            if(canCross(cells, mid)) {
                lastDay = mid+1;
                l       = mid+1;
            } else {
                r = mid-1;
            }
            
        }
        
        return lastDay;
        
    }
};

*/

//using DFS very likely not to get accepted!
//Approach 1 using DFS + Binary Search!

class Solution {
public:
    int ROW,COL;
    vector<vector<int>> directions{{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool DFS(vector<vector<int>>& grid, int i, int j) {

        if (i < 0 || j < 0 || j >= COL || i >= ROW || grid[i][j] == 1) {
            return false;
        }

        if (i == ROW-1) {
            return true;
        }

        grid[i][j] = 1;

        for (auto dir: directions) {
            int ni = dir[0] + i, nj = dir[1] + j;

            if (DFS(grid, ni, nj)) {
                return true;
            }

        }   
        return false;
    }
    bool canWalk(vector<vector<int>>& cells,  int e) {

        vector<vector<int>>grid(ROW, vector<int>(COL,0));

        for (int i = 0; i <= e; i++) {
            int r = (cells[i][0]-1), c = (cells[i][1]-1);

            grid[r][c] = 1;
        }

        for (int j = 0; j < COL; j++) {

            if (grid[0][j] == 0 && DFS(grid, 0, j)) {
                return true;
            }

        }

        return false;
    }

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        
        int lastday = 0;
        ROW = row, COL = col;
        int s = 0;
        int e = cells.size()-1;

        while (s <= e) {
            int mid = s + (e-s)/2;

            if (canWalk(cells, mid)) {
                lastday = mid+1;
                s = mid+1;
            } else {
                e = mid-1;
            }
            
        }   
        return lastday;
    }
};




int main() {
    vector<vector<int>>cells{{1,0},{1,2}};
    Solution check;
    check.latestDayToCross(2,2,cells);
    return 0;
}