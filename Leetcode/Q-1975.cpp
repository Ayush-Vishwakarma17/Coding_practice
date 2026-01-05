#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans = 0;
        long long count = 0;
        long long mini = LLONG_MAX;
        for (auto list: matrix) {
            for (auto val: list) {
                long long num = abs(val);
                ans += num;
                if (val < 0) {
                    count++;
                }
                mini = min(mini, num);
            }
        }   
        return (count % 2 == 0) ? ans : (ans-2*mini); 
    }
};
int main() {
    Solution check;
    vector<vector<int>>matrix = {
        {1,2,3},
        {-1,-2,-3},
        {1,2,3},
    };

    check.maxMatrixSum(matrix);
    return 0;
}