#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> stack;
        int res = 0;
        for (int num : nums) {
            while (!stack.empty() && stack.back() > num)
                stack.pop_back();
            
            if (num == 0)
                continue;
            if (stack.empty() || stack.back() < num) {
                res++;
                stack.push_back(num);
            }
        }
        cout <<"The result is: "<< res;
        return res;
    }
};
int main() {
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    Solution check;
    check.minOperations(nums);
    return 0;
}