#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int t; cin>>t;
    vector<int> result;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums;
        result.clear();
        while (n>0) {
            n--;
            int x; cin>>x;
            nums.push_back(x);
        }
        if (is_sorted(nums.begin(), nums.end())) {
            result = nums;
            cout<<result.size()<<endl;
            for (auto it: result) {
                cout<<it<<" ";
            }
            continue;
        }
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] >= nums[i-1]) {
                result.push_back(nums[i]);
            } else {
                result.push_back(nums[i]);
                result.push_back(nums[i]);
            }
        }
        cout<<result.size()<<endl;
            for (auto it: result) {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}