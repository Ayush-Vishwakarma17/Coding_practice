/*

------------------ O(n) solution without using binary search ------------

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0; int j = nums.size()-1;
        while (i < nums.size() && nums[i] != target) {
            i++;
        }
        while (j >= 0 && nums[j] != target) {
            j--;
        }
        if (i < nums.size() && j >= i) {
            return {i,j};
        }
        return {-1,-1};
    }
};

------------------- O(log(n)) solution using binary search algorith ------------


*/