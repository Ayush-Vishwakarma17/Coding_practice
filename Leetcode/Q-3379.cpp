/*


------------- My simulation solution for this problem -------------

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        int n = nums.size();
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                result[idx] = nums[i];
                idx++;
                continue;
            } else if (nums[i] > 0) {
                int newidx = (i + nums[i])%n;
                result[idx] = nums[newidx];
                idx++;
                continue;
            } else {

            // for finding index circularly to the left just find steps first
            //after than add n to it to be saved from negative indexes and find diff b/w i and steps
            //then modulo it to get the new index 
            
                int steps = abs(nums[i]) % n;
                int newidx = (i - steps + n)%n; 
                result[idx] = nums[newidx];
                idx++;
                continue;
            }
        }
        return result; 
    }
};


*/