#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

//My naive approach to calculate

    int countOdds(int low, int high) {
        int ans = 0;
        for (int i = low; i <= high; i++) {
            if (i % 2 != 0) {
                ans++;
            }
        }
        return ans;
    }
};

    /*
        Mathematical approach in constant way to calculate

        int countOdds(int low, int high) {
        return (((high+1)/2) - (low/2));
};

    */ 
int main() {
    Solution check;
    check.countOdds(3, 5);
    return 0;
}