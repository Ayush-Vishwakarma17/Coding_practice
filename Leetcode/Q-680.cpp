#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1, deleteCount = 0;
        if (s.length() == 1) return true;

        while (i < j) {
            if ((s[i] != s[j]) && (deleteCount == 1)) {
                return false;
            }

            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                // mismatch -> try skipping either left or right
                deleteCount++;
                // try skipping left
                int i1 = i + 1, j1 = j;
                while (i1 < j1 && s[i1] == s[j1]) {
                    i1++; j1--;
                }
                if (i1 >= j1) return true;

                // try skipping right
                int i2 = i, j2 = j - 1;
                while (i2 < j2 && s[i2] == s[j2]) {
                    i2++; j2--;
                }
                return i2 >= j2;
            }
        }
        return true;
    }
};
int main() {
    Solution check;
    check.validPalindrome("AYUYA");
    return 0;
}
