#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int totalop = 0;
        for (auto it: nums) {
            if (it % 3 == 0) {
                continue;
            } else if ((it+1) % 3) {
                totalop++;
            } else if ((it-1) % 3) {
                totalop++;
            }
        }
        cout<<"the total operations: "<<totalop;
        return totalop;   
    }
};
int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    Solution check;
    check.minimumOperations(nums);
    return 0;
}