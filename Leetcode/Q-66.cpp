#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int n = digits.size()-1;
        int carry = 1;
        for (int i = n; i >= 0; i--) {
            int num = digits[i]+carry;
            if (num > 9) {
                carry = 1;
                num %= 10;
                result.push_back(num);
            } else {
                carry = 0;
                result.push_back(num);
            }
        }
        if (carry == 1){
            result.push_back(carry);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
int main() {
    vector<int> digits({0,1,2,3,1});
    Solution check;
    auto ans = check.plusOne(digits);
    for (auto it: ans) {
        cout<<it<<" ";
    }
    return 0;
}