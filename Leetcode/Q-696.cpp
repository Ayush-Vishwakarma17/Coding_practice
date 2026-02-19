/*

----------- The bruteforce solution i come up with -----------
generate all the subarrays and check for it's frequent numbers got tle but ahhh, at least i tried
TC O(n cube)

class Solution {
public:
bool valid (string substr) {
    if (substr.length() == 2 && substr[0] != substr[1]) {
        return true;
    }
    if (substr.length() == 2 && substr[0] == substr[1]) {
        return false;
    }
    int countone = 1, countzero = 1;
    int i = 1; 
    while (i < substr.length()) {
        if (substr[i] == substr[i-1]) {
            countzero++;
            i++;
        } else {
            break;
        }
        
    }
    if (i == substr.length()-1) {
        return false;
    }
    i++;
    while (i < substr.length()) {
        if (substr[i] == substr[i-1]) {
            countone++;
            i++;
        } else {
            break;
        }
        
    }
    if (countzero*2 == substr.length() && countone*2 == substr.length()) {
        return true;
    }
    return false;
}
    int countBinarySubstrings(string s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            string substring = "";
            for (int j = i; j < s.length(); j++) {
                substring += s[j];
                if ((substring.length() % 2 == 0)) {
                    if (valid(substring)) {
                        result++;
                    }
                }
            }
        }
        return result;
    }
};

---------------------------------- Optimal solution -------------------------------
TC O(n)
just maintain the streak using prev and curr streak and add the min of both to result
kind of pattern recognition problem hmmmmm


class Solution {
public:
    int countBinarySubstrings(string s) {
        int result = 0;
        int curr = 1, prev = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i-1]) {
                curr++;
            } else {
                result += min(curr, prev);
                prev = curr;
                curr = 1;
            }
        } 
        result += min(curr,prev);
        return result;
    }
};


*/