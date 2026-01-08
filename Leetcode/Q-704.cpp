#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        while (s <= e) {
            int mid = s + (e-s)/2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                e = mid-1;
            } else {
                s = mid+1;
            }
        }
        return -1;
    }
};
int main() {
    vector<int> nums({1,2,5,6,7,8});
    int target = 6;
    Solution check;
    check.search(nums, target);
    return 0;
}