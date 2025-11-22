#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    vector<string> result;
    while (t) {
        t--;
        int n, k; cin>>n>>k;
        vector<int> nums;
        while (n) {
            n--;
            int x; cin>>x;
            nums.push_back(x);
        }
        int count = 0;
        for (auto val: nums) {
            if (val == k) {
                count++;
            }
        }
        if (count > 0) {
            result.push_back("YES");
        } else {
            result.push_back("NO");
        }
    }
    for (auto ans: result) {
        cout<<ans<<endl;
    }
    return 0;
}