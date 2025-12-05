#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        vector<int>prefixarr;
        prefixarr.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            prefixarr.push_back(nums[i]+prefixarr.back());
        }
        for (int i = 0; i < prefixarr.size()-1; i++) {
            if ((prefixarr[i] + (prefixarr.back()-prefixarr[i])) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};
int main() {
    vector<int> nums({10,10,3,7,6});
    Solution check;
    int ans = check.countPartitions(nums);
    cout<<"Total sum parity recieved: "<<ans;
    return 0;
}

