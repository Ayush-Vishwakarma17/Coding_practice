/*

simulation method brute approach! 

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> result;
        for (auto it: nums) {
            int num = -1;
            for (int i = 0; i < it; i++) {
                if ( (i | i+1) == it) {
                    num = i;
                    break;
                }
            }
            result.push_back(num);
        }
        return result;
    }
};


*/