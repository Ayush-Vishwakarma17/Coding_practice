#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static const int MOD = 1000000007;

    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        int first = complexity[0];

        for (int i = 1; i < n; i++) {
            if (complexity[i] <= first) return 0;
        }

        long long fact = 1;
        for (int i = 2; i < n; i++) {
            fact = (fact * i) % MOD;
        }

        return (int)fact;
    }
};
int main() {
    Solution check;
    vector<int> nums({2,3,4,5,1,32,3,2,2,44});
    check.countPermutations(nums);
    return 0;
}