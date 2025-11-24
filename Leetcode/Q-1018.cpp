#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result(nums.size());

        long long value = 0;

        for (int i = 0; i < nums.size(); i++) {
            value = (value * 2 + nums[i]) % 5;  
            result[i] = (value == 0);
        }

        return result;
    }
};


int main() {
    Solution check;
    vector<int>nums({1,0,0,0,1,1,1,1,0,0,0,1});
    check.prefixesDivBy5(nums);

    return 0;
}