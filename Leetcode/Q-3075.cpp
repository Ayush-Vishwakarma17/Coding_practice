#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long long maxhappiness = 0;
        int i = happiness.size()-1;
        int lessnum = 0;
        while (k) {
            k--;
            int value = happiness[i]-lessnum;
            if (value < 0) {
                value = 0;
                break;
            }
            maxhappiness += value;
            lessnum++;
            i--;
        }
        return maxhappiness;
    }
};
int main() {
    Solution check;
    vector<int> nums({2,2,4,5});
    check.maximumHappinessSum(nums, 2);
    return 0;
}