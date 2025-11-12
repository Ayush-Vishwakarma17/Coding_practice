#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> result;
        result = prices;
        stack<int> st;

        for (int i = n-1; i >= 0; --i) {
            while (!st.empty() && st.top() > prices[i]) {
                st.pop();
            }
            if (!st.empty()) {
                result[i] = abs(result[i] - st.top());
            }
            st.push(prices[i]);
        }
        return result;
    }
};

int main() {
    Solution check;
    vector<int> nums;
    nums.push_back(8);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(2);
    nums.push_back(3);
    vector<int> ans;
    ans = check.finalPrices(nums);
    for (auto val: ans) {
        cout<<val<<" ";
    }
    return 0;
}