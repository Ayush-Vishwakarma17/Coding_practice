#include<bits/stdc++.h>
using namespace std; 
int main() {
    int t; cin>>t;
    vector<int>b;
    vector<int>c;
    while (t) {
        cout<<endl;
        t--;
        int n; cin>>n;
        b.clear();c.clear();
        vector<int>nums;
        while (n) {
            n--;
            int x; cin>>x;
            nums.push_back(x);
        }
        sort(nums.begin(), nums.end());
        int mx = nums[nums.size()-1];

        for (auto it: nums) {
            if (mx == it) {
                c.push_back(it);
            } else {
                b.push_back(it);
            }
        }
        if (c.size() == nums.size()) {
            cout<<-1;
            continue;
        } else {
            cout<<b.size() <<" "<<c.size()<<endl;
            for (auto it: b) {
                cout<<it<<" ";
            }
            cout<<endl;
            for (auto it: c) {
                cout<<it<<" ";
            }
        }
    }
    return 0;
}