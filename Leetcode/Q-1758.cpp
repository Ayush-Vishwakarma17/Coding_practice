/*

 ------------- the brute solution i come up with ------------- 
class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        if (n == 1) {
            return 0;
        }
        int result = 0;
        string s1 = "";
        string s2 = "";
        bool flag = true;
        while (s1.length() != n) {
            if (flag) {
                s1 += '0';
                flag = false;
            } else {
                s1 += '1';
                flag = true;
            }
        }

        flag = false;
        while (s2.length() != n) {
            if (flag) {
                s2 += '0';
                flag = false;
            } else {
                s2 += '1';
                flag = true;
            }
        }

        int change1 = 0;
        int change2 = 0;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s[i]) {
                change1++;
            }
            if (s2[i] != s[i]) {
                change2++;
            }
        } 
        result = min(change1, change2);
        return result;
    }
};


*/