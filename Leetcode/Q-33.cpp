#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1; 
        while (s <= e) {
            int mid = s + (e-s)/2;

            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] >= nums[s]) {
                if (target >= nums[s] && target <= nums[mid]) {
                    e = mid;
                } else {
                    s = mid+1;
                }
            } else {
                if (target >= nums[mid] && target <= nums[e]) {
                    s = mid;
                } else {
                    e = mid;
                }
            }
        }
        return -1;
    }
};
int main() {
    Solution check;
    vector<int> nums({4,5,6,7,0,1,2,3});
    check.search(nums, 0);
    return 0;
}