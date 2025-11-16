#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSub(string s) {
        long long mod = 1000000007;
        long long result = 0;
        long long r = 0;
        long long count = 0;
        while (r < s.length()) {
            if (s[r] == '1') {
                count++;
            } else {
                if (count > 0) {
                    result += (((count+1)*count)/2)%mod;
                }
                count = 0;
            }
            r++;
        }
        if (count > 0) {
                result += (((count+1)*count)/2)%mod;
            }
        cout<<"The result is: " << result;
        return (int)result;
    }
};

int main() {
    Solution check;
    check.numSub("10011101101");\
    return 0;
}