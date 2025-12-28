#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums(n, 0);
        for (int i = 0; i < n; i++) {
            cin>>nums[i];
        }
        bool check = false;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (__gcd(nums[i], nums[j]) <= 2) {
                    check = true;
                }
            }
        }
        if (check) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}