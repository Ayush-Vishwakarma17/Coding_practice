#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    vector<int> result;
    while (t) {
        t--;
        int n, x; cin >> n >> x;
        vector<int> nums;
        int maxdist = INT_MIN;
        nums.push_back(0);
        while (n) {
            n--;
            int a;cin>>a;
            nums.push_back(a);
        }
        nums.push_back(x);
        for (int i = 1; i < nums.size(); i++) {
            if (i == nums.size()-1) {
                maxdist = max(maxdist, 2*(nums[i]-nums[i-1]));
            } else {
                maxdist = max(maxdist, nums[i]-nums[i-1]);
            }
        }
        result.push_back(maxdist);
    }
    for (auto val: result) {
        cout<<val<<endl;
    }
    return 0;
}