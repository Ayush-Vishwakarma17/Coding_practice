/*

class Solution {
public:
    int residuePrefixes(string s) {
        int ans = 0;
        string s2 = "";
        unordered_map<char, int> freq;
        for (auto ch: s) {
            s2 += ch;
            freq[ch]++;
            if (freq.size() == (s2.length()%3)) {
                ans++;
            }
        }
        return ans;
    }
};

*/