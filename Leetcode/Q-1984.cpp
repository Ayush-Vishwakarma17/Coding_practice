/*
----------------------------------> Solution of 1984 leetcode <----------------------------------

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (nums.size() == 1) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = k-1;
        int diff = INT_MAX;
        while (j < nums.size()) {
            diff = min(diff, nums[j]-nums[i]);
            i++;
            j++;
        }
        return diff;
    }
};

*/