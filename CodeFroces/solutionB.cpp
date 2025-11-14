#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    vector<int> result;
    while (t) {
        t--;
        string s; cin>>s;
        int left = 0;
        int right = 0;
        int middle = 0;
        if (s.length() == 1) {
            result.push_back(1);
        }
        for (auto it: s) {
            if (it == '*') {
                middle++;
            } else if (it == '>') {
                right++;
            } else {
                left++;
            }
        }
        if (right = left) {

        }
    }
    return 0;
}