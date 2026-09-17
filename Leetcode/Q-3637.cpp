/*

-------------------- My brute approach to solve trionic array problem -----------------------

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p = 0;
        int n = nums.size();
        if (n < 4) {
            return false;
        }

        while (p + 1 <= n - 1 && nums[p] < nums[p + 1]) {
            p++;
        }
        if (p == 0)
            return false;
        int q = p;
        while (q + 1 <= n - 1 && nums[q] > nums[q + 1]) {
            q++;
        }
        if (q == p)
            return false;

        int r = q;

        while (r + 1 <= n - 1 && nums[r] < nums[r + 1]) {
            r++;
        }
        if (r == q) {
            return false;
        }
        return r == n-1;
    }
};

*/