/*

--------------- solution 1 using extra space --------------
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        vector<int> result(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            int idx = (i+k)%nums.size();
            result[idx] = nums[i]; 
        }
        nums.clear();
        nums = result;
    }
};

// solution 2 without using extra space



*/