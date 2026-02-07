/*

---------------------- My Sliding Window Approach --------------------
--------------- Easy Solution to find the maximum balanced length -----------------


class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, r = 0, maxl = INT_MIN;
        int n = nums.size();
        if (n == 1) {return 0;}
        while (r < n) {
            if (1LL*nums[l]*k >= nums[r]*1LL) {
                maxl = max(maxl, r-l+1);
                r++;
            } else {
                l++;
            }
        }
        return n-maxl;
    }
};

*/