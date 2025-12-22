#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        vector<int> nums;
        int ans = 0;
        int n; cin>>n;
        while (n) {
            n--;
            int x; cin>>x;
            nums.push_back(x);
        }
        for (auto it: nums) {
            ans^=it;
        }
        if (nums.size() % 2 != 0) {
            cout<<ans<<endl;
        } else if (ans == 0) {
            cout<<0<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    return 0;
}