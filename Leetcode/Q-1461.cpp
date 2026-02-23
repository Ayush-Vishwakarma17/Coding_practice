/*

------------ solution using built-in function --------------
    class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> st;
        for (int i = 0; i + k <= s.size(); i++) {
        st.insert(s.substr(i, k));
        }
        int result = pow(2,k);
        return st.size() == result;
    }
};
*/