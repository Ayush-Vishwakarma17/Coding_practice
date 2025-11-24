#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        long long n; cin>>n;
        vector<int> nums(n,0);
        int goals = 0;
        for (int i = 0; i < n-1; ++i) {
            cin>>nums[i];
            goals+=nums[i];
        }
        cout<<-1*goals<<endl;
    }
    return 0;
}