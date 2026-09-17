/*


---------- 2n space string + sliding window solution --------------

class Solution {
public:
    int minFlips(string s) {
        s = (s+s); int n = s.length();
        string s1 = "", s2 = "";

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                s1 += '0';
            } else {
                s1 += '1';
            }

            if (i % 2 == 0) {
                s2 += '1';
            } else {
                s2 += '0';
            }
        }

        int result = INT_MAX, flip1 = 0, flip2 = 0;
        int i = 0, j = 0;

        while (j < n) {
            if (s[j] != s1[j]) {
                flip1++;
            }
            if (s[j] != s2[j]) {
                flip2++;
            }

            if ((j-i+1) > n/2) {
                if (s[i] != s1[i]) {
                    flip1--;
                }
                if (s[i] != s2[i]) {
                    flip2--;
                }
                i++;
            }
            if ((j-i+1) == n/2) {
                result = min({result, flip1, flip2});
            }
            j++;
        }
        return result;
    }
};


*/