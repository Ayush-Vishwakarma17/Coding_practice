#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int> nums;
    while (n) {
        n--;
        int val; cin >> val;
        if (val == 0) {
            cout<<0;
            return 0;
        }
        if (val < 0) {
            nums.push_back(-1*val);
        } else {
            nums.push_back(val);
        }
    }
    sort(nums.begin(), nums.end());
    cout<<nums[0];
    return 0;
}