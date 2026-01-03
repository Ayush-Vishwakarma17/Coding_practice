#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums(n,0);
        for (int i = 0; i < n; i++) {
            cin>>nums[i];
            if (nums[i] % 2 == 0) {
                nums[i] = 0;
            } else {
                nums[i] = 1;
            }
        }
        vector<int> num;
        int count = 0;
        for (int i = 0; i < n-1; i++) {
            if (nums[i] == 1 && nums[i+1] == 1) {
                count++;
            } else if (nums[i] == 0 && nums[i+1] == 0) {
                count++;
            } else {
                continue;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}