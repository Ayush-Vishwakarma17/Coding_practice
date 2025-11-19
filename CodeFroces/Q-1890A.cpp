#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    vector<string> result;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums;
        while (n) {
            int a; cin>>a;
            nums.push_back(a);
            n--;
        }   
        set<int> st;
        unordered_map<int,int> mp;
        for (auto val: nums) {
            st.insert(val);
            mp[val]++;
        }

        if (st.size() == 1) {   
            result.push_back("YES");
        } else if (st.size() >= 3) {
            result.push_back("NO");
        } else {
            auto it = st.begin();
            int a = *it;
            it++;
            int b = *it;
            if (mp[a] == mp[b]) {
                result.push_back("YES");
            } else if (mp[a] + 1 == mp[b]) {
                result.push_back("YES");
            } else if (mp[a] == mp[b]+1) {
                result.push_back("YES");
            } else {
                result.push_back("NO");
            }
        }
    }
    for (auto it: result) {
        cout<<it<<endl;
    }
    return 0;
}