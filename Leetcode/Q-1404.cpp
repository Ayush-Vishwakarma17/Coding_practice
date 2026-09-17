/*

---------- pretty simulation approach -----------------

class Solution {
public:
void addone(string &s) {
    int i = s.length()-1;
    while (i >= 0 && s[i] != '0') {
        s[i] = '0';
        i--;
    }
    if (i < 0) {
        s = '1' + s;
    } else {
        s[i] = '1';
    }
}
    int numSteps(string s) {
        int steps = 0;
        while (s.length() > 1) {
            if (s.back() == '1') {
                addone(s);
            } else {
                s.pop_back();
            }
            steps++;
        }
        return steps;
    }
};

*/