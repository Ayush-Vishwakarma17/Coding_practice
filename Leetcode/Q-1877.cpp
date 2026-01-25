/*



class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxminiSum = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size()-1;
        while (i <= (n/2-1)) {
            int num = nums[i]+nums[j];
            maxminiSum = max(num, maxminiSum);
            j--, i++;
        }
        return maxminiSum;
    }
};


*/