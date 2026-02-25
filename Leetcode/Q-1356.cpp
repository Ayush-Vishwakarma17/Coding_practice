/*

----------- my solution is pretty straight forward simulating the problem statement ------------
--------- so yeah this is all i got to solve for today do your best in upcoming days ayushhh keep going forward -------------

sorting + map

25 feb 2026 peace out! 

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> result;
        sort(arr.begin(), arr.end());
        map<int, vector<int>> mp;
        for (auto val: arr) {
            int setbits = __builtin_popcount(val);
            mp[setbits].push_back(val);
        }
        for (auto &it : mp) {
            if (!it.second.empty()) {
                
                for (auto val: it.second) {
                    result.push_back(val);
                }
            }
        }
        return result;
    }
};

*/