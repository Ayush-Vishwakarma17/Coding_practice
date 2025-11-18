#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    vector<int> result;
    while (t) {
        t--;
        int n;cin>>n;
        string s; cin>>s;

        // find max frequency
        vector<int> freq(26,0);
        for (auto it : s) {
            freq[it - 'a']++;
        }

        int mx = 0;
        for (int x : freq) mx = max(mx, x);

        int op = n - mx; // minimum operations

        result.push_back(op);
    }
    for (auto it: result) {
        cout<<it<<endl;
    }
    return 0;
}
