/*


//optimal approach to find.

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 2) {
                result.push_back(-1);
                continue;
            }
            bool check = false;
            for (int j = 1; j < 32; j++) {
                if ((nums[i] & (1 << j)) > 0) {
                    continue;
                }
                int num = ((nums[i]) ^ (1 << (j-1)));
                result.push_back(num);
                check  = true;
                break;
            }
            if (check == false) {
                result.push_back(-1);
            }
        }
        return result;
    }
};

*/