#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if (bits.size() == 1) {
            if (bits[0] == 1) {
                cout<<"False";
                return false;
            } else {
                cout<<"True";
                return true;
            }
        }
        int count = 0;
        
        for (int i = 0; i < bits.size()-1; i++) {
            if (i == bits.size()-1 && bits[i] == 0) {
                cout<<"True";
                return true;
            }
            if (bits[i] == 1 && bits[i+1] == 1) {
                i++;
                count = i+2;
            } else if (bits[i] == 1 && bits[i+1] == 0) {
                i++;
                count = i+2;
            } else {
                continue;
            }
        }
        if (count > bits.size()) {
            cout<<"False";
            return false;
        }
        cout<<"True";
        return true;
    }
};
int main() {
    Solution check;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    check.isOneBitCharacter(nums);
    return 0;
}