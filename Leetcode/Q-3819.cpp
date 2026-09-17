/*

my brute solution to tackle this problem! 

class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> positive;
        for (auto val: nums) {
            if (val >= 0) {
                positive.push_back(val);
            }
        }
        if (positive.empty()) {
            return nums;
        }
        vector<int> rotated(positive.size());
        int n = positive.size();
        k = k % n;
        for (int i = 0; i < rotated.size(); i++) {
            rotated[(i-k+n)%n] = positive[i];
        }
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                nums[i] = rotated[idx];
                idx++;
            }
        }
        return nums;
    }
};

*/