#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int row = grid.size();
        int count = 0;
        if (row <= 2) {
            return 0;
        }
        for (int i = 0; i < row-2; i++) {
            vector<int> num1;
            vector<int> num2;
            vector<int> num3;
            num1 = grid[i];
            num2 = grid[i+1];
            num3 = grid[i+2];
        
        for (int w = 0; w < num1.size()-2; w++) {

                int a = num1[w], b = num1[w+1], c = num1[w+2];
                int p = num2[w], q = num2[w+1], r = num2[w+2];
                int s = num3[w], t = num3[w+1], u = num3[w+2];

                bool check1 = false;
                bool check2 = false;
                bool check3 = false;

                    set<int> st;
                    st.insert({a,b,c,p,q,r,s,t,u});
                    int up = a + b + c;
                    int mid = p + q + r;
                    int down = s + t + u;
                    int stmax = *st.rbegin();
                    int stmin = *st.begin();
                    if (up == mid && mid == down) {
                        check1 = true;
                    }

                    int dia = a + q + u;
                    int rigdia = s + q + c;

                    if (dia == rigdia) {
                        check2 = true;
                    }

                    int c1 = a + p + s;
                    int c2 = b + q + t;
                    int c3 = c + r + u;

                    if (c1 == c2 && c2 == c3) {
                        check3 = true;
                    }
                    if (st.size() != 9 || stmax > 9 || stmin == 0) {
                        check1 = false;
                    }
                    if (check1 && check2 && check3) {
                        count++;
                    }
                }
            }
        return count;
    }
};
int main() {
    vector<vector<int>> grid = {{4,3,2,1}, {5,6,7,8}, {9,7,5,3}};
    Solution check;
    check.numMagicSquaresInside(grid);
    return 0;
}