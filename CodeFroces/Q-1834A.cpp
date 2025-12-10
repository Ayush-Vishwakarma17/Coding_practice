#include<bits/stdc++.h>
using namespace std; 
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums;
        while (n) {
            n--;
            int x; cin>>x;
            nums.push_back(x);
        }
        int neg = 0, pos = 0;
        for (auto val: nums) {
            if (val == -1) {
                neg++;
            } else {
                pos++;
            }
        }
        if (neg == pos) {
            cout<<0<<endl;
        } else if () {

        }
    }
    return 0;
}