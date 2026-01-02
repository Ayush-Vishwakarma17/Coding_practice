#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (auto val: nums) {
            mp[val]++;
        }
        for (auto it: mp) {
            if (it.second >= (nums.size()/2)) {
                return it.first;
            }
        }
        return -1;
    }
};
int main() {
    Solution check;
    vector<int>arr({1,2,3,3,3,3});
    check.repeatedNTimes(arr);
    return 0;
}