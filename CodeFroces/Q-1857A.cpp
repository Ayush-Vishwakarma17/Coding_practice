#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums(n,0);
        for (int i = 0; i < n; i++) {
            int x; cin>>x;
            nums[i] = x;
        }
        int sum = 0;
        for (auto val: nums) {
            sum+=val;
        }
        if (sum%2 == 0) {
            cout<<"YES";
        } else {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}