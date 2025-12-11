#include<bits/stdc++.h>
using namespace std; 
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> ans;
        while (n) {
            n--;
            int x; cin>>x;
            ans.push_back(x);
        }
        if (is_sorted(ans.begin(), ans.end())) {
            sort(ans.rbegin(), ans.rend());
        } else {
            sort(ans.begin(), ans.end());
        }
        for (auto it: ans) {
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}