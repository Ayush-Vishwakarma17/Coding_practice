/*

-------------- my appproach was o of n cube sheeshh -------------

------------- this approach is o of n square and passable so good luck ayush keep learning and improving -------------

class Solution {
public:

    int longestBalanced(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            set<int> even;
            set<int> odd;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] % 2 == 0) {
                    even.insert(nums[j]);
                } else {
                   odd.insert(nums[j]); 
                }
                if (odd.size() == even.size()) {
                    result = max(result, j-i+1);
                }
            }
        }
        return result;
    }
};


*/