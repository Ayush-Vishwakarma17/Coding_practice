#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (auto val: nums) {
            if (val == 1) {
                count++;
            }
        }
        if (count > 0) {
            return n-count;
        }

        int total = INT_MAX;

        for (int i = 0; i < n; i++) {
            int GCD = nums[i];
            for (int j = i+1; j < n; j++) {
                GCD = gcd(GCD, nums[j]);
                if (GCD == 1) {
                    total = min(total, j-i);
                }
            }
        }
        if (total == INT_MAX) {
            return -1;
        }

        return total+(n-1);

    }
};

int main () {
    Solution check;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    check.minOperations(nums);
    return 0;
}