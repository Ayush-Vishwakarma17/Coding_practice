#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc; cin>>tc;
    while (tc--) {
        int a,b,n; cin>>a>>b>>n;
        vector<int> nums(n, 0);
        for (int i = 0; i < n; i++) {
            cin>>nums[i];
        }

        long long maxsec = b;
        for (auto it: nums) {
            maxsec += min(it, a-1);
        }
        cout<<maxsec<<endl;
    }
    return 0;
}