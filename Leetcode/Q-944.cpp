#include<bits/stdc++.h>
using namespace std;

//my solution not optimal

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int n = strs.size();
        int size = strs[0].length();
        int i = 0;
        int count = 0;
        while (i < size) {
            string str = "";
            for (int j = 0; j < n; j++) {
                string s = strs[j];
                str+=s[i];
            }
            if (!is_sorted(str.begin(), str.end())) {
                count++;
            }
            i++;
        }   
        return count;
    }
};



int main() {
    vector<string> strs;
    strs.push_back("hello");
    strs.push_back("mello");
    strs.push_back("kello");
    strs.push_back("cello");
    Solution check;
    check.minDeletionSize(strs);
    return 0;
}