#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for (auto it: nums) {
            sum+=it;
        }
        return sum%k;
    }
};
int main() {
    Solution check;
    vector<int>nums({1,2,43,4,3,2});
    check.minOperations(nums, 7);
    return 0;  
}