#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i = 0, j = 0;
        if (nums[i] != 1) {
            while (i < nums.size() && nums[i] != 1) {
                i++;
            }
            j = i;
            if (i >= nums.size()) {
                return true;
            }
        }
        while (j < nums.size()) {
            if (j != i && nums[j] == 1) {
                if ((j - i - 1) >= k) {
                    i = j;
                } else {
                    cout<<"Dhat thaari Code phat gaya.";
                    return false;
                }   
            }
            j++;
        }
        cout<<"Vijayi Bhawa";
        return true;
    }
};
int main() {
    Solution check;
    int k = 2;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(0);
    check.kLengthApart(nums, k);
    return 0;
}