#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> result;

    int t; cin>>t;
    while (t) {
        t--;
        int n, k; cin >>n >> k;
        vector<int> nums;
        while (n) {
            n--;
            int val; cin >> val;
            nums.push_back(val);
        } 
        if (is_sorted(nums.begin(), nums.end())) {
            result.push_back("YES");
            continue;
        } else if (nums.size() == 1) {
            result.push_back("YES");
        } else if (nums.size() > 1 && k <= 1) {
            result.push_back("NO");
        } else if ( nums.size() >= 2 && k >= 2) {
            result.push_back("NO");
        } else {
            continue;
        }
    }
    for (auto ans: result) {
        cout<<ans<<endl;
    }
    return 0;
}
