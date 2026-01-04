#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int check(int num) {
        int digCount = 0, sum = 0;
        for (int i = 1; i*i <= num; i++) {
            if (num % i == 0) {
                int dividedOne = num/i;
                if (dividedOne == i) {
                    digCount++;
                    sum += i;
                } else {
                    sum += (dividedOne+i);
                    digCount+=2;
                }
            }
            if (digCount > 4) {
                return 0;
            }
        }
        return (digCount == 4) ? sum : 0; 
    }
    int sumFourDivisors(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            result += check(nums[i]);
        }
        cout<<result<<" This was the answer. "<<endl;
        return result;
    }
};
int main() {
    Solution check;
    vector<int> nums({1,2,3,4,5,6,7,8,9,10});
    check.sumFourDivisors(nums);  
    return 0;
}