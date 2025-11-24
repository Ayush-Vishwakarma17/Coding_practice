#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

//Brute approach 

    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int total = 0;
        
        int i = 0, j = nums.size()-1;
        while (j > i) {
            int diff = nums[j] - nums[i];
            total += diff;
            for (int i = 0; i < j; i++) {
                nums[i]+=diff;
            }
            j--;
        }
        cout<<"The total operations: "<<total;
        return total;
    }
};  

//Mathematical optimal approach


// class Solution {
// public:
//     int minMoves(vector<int>& nums) {
//         int minimum = *min_element(nums.begin(), nums.end());
//         int sum = 0;
//         for (auto val: nums) {
//             sum+=val;
//         }
//         int n = nums.size();
//         int total = sum - n*minimum;
//         return total;
//     }
// };  

int main() {
    Solution check;
    vector<int> nums({1,2,3,4,5});
    check.minMoves(nums);
    return 0;
}