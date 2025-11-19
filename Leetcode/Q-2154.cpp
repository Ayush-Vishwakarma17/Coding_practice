#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> st;
        for (auto val: nums) {
            st.insert(val);
        }
        while (st.count(original)) {
            original*=2;
        }
        cout<<"The value is: " << original;
        return original;
    }
};

int main() {
    Solution check;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(2);
    int original = 2;
    check.findFinalValue(nums, original);
    return 0;
}
