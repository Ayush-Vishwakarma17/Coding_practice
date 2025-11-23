#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        
        vector<int> r1;
        vector<int> r2;
        int sum = 0;

        for (auto val: nums) {
            sum += val;
            if (val % 3 == 1) r1.push_back(val);
            else if (val % 3 == 2) r2.push_back(val);
        }

        sort(r1.begin(), r1.end());
        sort(r2.begin(), r2.end());

        if (sum % 3 == 0) {
            return sum;
        }
        
        int ans = 0;

        if (sum % 3 == 1) {
            int op1 = 1e9, op2 = 1e9;
            if (r1.size() >= 1) op1 = r1[0];
            if (r2.size() >= 2) op2 = r2[0] + r2[1];
            ans = sum - min(op1, op2);
        }

        else if (sum % 3 == 2) {
            int op1 = 1e9, op2 = 1e9;
            if (r2.size() >= 1) op1 = r2[0];
            if (r1.size() >= 2) op2 = r1[0] + r1[1];
            ans = sum - min(op1, op2);
        }
        
        cout<<"The ans is: "<<ans;
        return ans < 0 ? 0 : ans;
    }
};
int main () {
    Solution check;
    vector<int> nums({1,2,3,3,6,9,2,1,0,7});
    check.maxSumDivThree(nums);
    return 0;
}