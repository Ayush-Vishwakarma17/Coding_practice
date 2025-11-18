#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    vector<string> result;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums;
        while (n) {
            n--;
            int a; cin>>a;
            nums.push_back(a);
        }
        int mini = *min_element(nums.begin() , nums.end());
        if (nums[0] == mini) {
            result.push_back("YES");
        } else {
            result.push_back("NO");
            }
        }
    for (auto it: result) {
        cout<<it<<endl;
    }
    return 0;
}