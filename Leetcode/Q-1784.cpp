/*

-------------- The brute solution i come up with is very straight forward --------------
date - 06/03/2026

class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0;
        while (i < s.length() && s[i] != '0') {
            i++;
        }
        while (i < s.length()) {
            if (s[i] == '1') {
                return false;
            }
            i++;
        }
        return true;
    }
};


*/