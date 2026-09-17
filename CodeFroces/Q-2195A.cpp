#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--) {
        int n; cin>>n;
        bool check1 = false, check2 = false;
        vector<int> nums;
        while (n--) {
            int x; cin>>x;
            if (x == 67) {
                check1 = true;
            }
            nums.push_back(x);
        }
        if (check1 == true) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    
    
    return 0;
}