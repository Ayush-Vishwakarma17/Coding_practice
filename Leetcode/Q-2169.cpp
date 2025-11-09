#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
        while (num1 > 0 && num2 > 0) {
            if (num1 >= num2) {
                count += num1/num2;
                num1 = num1%num2;
            } else {
                swap(num1,num2);
            }
        }
        cout<<"THE COUNT IS: "<<count;
        return count;
    }
};


int main () {
    Solution check;
    check.countOperations(2, 3);
    return 0;
}