#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int dp[1001][1001];
int m, n;

int lcSubsequenceSum(string &s1, string &s2, int i, int j) {
    if (i >= m && j >= n) { 
        return 0;
    } 
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    if (i >= m) {
        return dp[i][j] = s2[j] + lcSubsequenceSum(s1, s2, i, j+1);
    }
    if (j >= n) {
        return dp[i][j] = s1[i] + lcSubsequenceSum(s1, s2, i+1, j);
    }
    if (s1[i] == s2[j]) {
        return dp[i][j] = lcSubsequenceSum(s1, s2, i+1, j+1);
    }

    int deletei = s1[i] + lcSubsequenceSum(s1, s2, i+1, j);
    int deletej = s2[j] + lcSubsequenceSum(s1, s2, i, j+1);

    
    return dp[i][j] = {min(deletei, deletej)};

}
    int minimumDeleteSum(string s1, string s2) {
        int totalSum = 0;
        m = s1.length(), n = s2.length();
        
        memset(dp, -1, sizeof(dp));

        return lcSubsequenceSum(s1,s2, 0, 0);;
    }
};

int main() {
    Solution check;
    check.minimumDeleteSum("ayush", "yusha");
    return 0;
}