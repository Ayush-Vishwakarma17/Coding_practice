#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin>>nums[i];
        }
        sort(nums.rbegin(), nums.rend());
        if (nums[0] == nums[n-1]) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
            int i = 0, j = n-1;
            vector<int> nums2;
            while (i <= j) {
                nums2.push_back(nums[i]);
                nums2.push_back(nums[j]);
                i++;
                j--;
            }
            if (n % 2 == 1) {
                nums2.pop_back();
            }
            for (auto it: nums2) {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}