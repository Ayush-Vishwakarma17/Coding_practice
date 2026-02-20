/*


--------------- The solution (in place) i come up with!
//quite simple just find every zero index and non zero index swap them and a little logic

class Solution {
public:
int nextzero(int idx, vector<int>& nums) {
            while (idx < nums.size()) {
            if (nums[idx] == 0) {
                break;
            }
            idx++;
            }
            return idx;
        }
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        i = nextzero(i, nums);
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[j], nums[i]);
                i = nextzero(i+1, nums); 
            }
        }
    }
};


*/