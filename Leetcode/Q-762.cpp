/*

------------------ solution that i comeup with for this potd leetcode --------------

class Solution {
public:
bool isPrime(int num) {
    set<int> st({2,3,5,7,11,13,17,19,23,27,29,31});
    if (st.count(num)) {
        return true;
    }
    return false;
}
    int countPrimeSetBits(int left, int right) {
        int result = 0;
        for (int i = left; i <= right; i++) {
            int setbits = __builtin_popcount(i);
            if (isPrime(setbits)) {
                result++;
            }
        }
        return result;
    }
};

*/