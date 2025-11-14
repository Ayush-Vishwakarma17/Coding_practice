#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    vector<int> result;
    while (t) {
        t--;
        int n, a; cin>>n>>a;
        vector<int> nums;
        while (n) {
            n--;
            int num; cin>>num;
            nums.push_back(num);
        }
        int lessthan = 0;
        int morethan = 0;
        sort(nums.begin(), nums.end());
        for (auto val: nums) {
            if (val > a) {
                morethan++;
            } else if (val < a) {
                lessthan++;
            } else {
                continue;
            }
        }
        if (lessthan == morethan) {
            result.push_back(1337);
        } else if (lessthan > morethan) {
            result.push_back(a-1);
        } else {
            result.push_back(a+1);
        }
    }
    for (auto val: result) {
        cout<<val<<" ";
    }
    return 0;
}