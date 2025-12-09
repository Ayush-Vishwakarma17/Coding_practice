#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int count = 0, mod = 1e9+7;
        unordered_map<int,int> left;
        unordered_map<int,int> right;
        for (auto it: nums) {
            right[it]++;
        }
        for (auto it: nums) {
            right[it]--;
            count = (count + 1LL*(left[2*it]%mod)*(right[2*it]%mod))%mod;
            left[it]++;
        }
        return count%mod;
    }
};
int main() {
    vector<int> nums({1,2,3,32,2,6,4,3,6});
    Solution check;
    check.specialTriplets(nums);
    return 0;
}