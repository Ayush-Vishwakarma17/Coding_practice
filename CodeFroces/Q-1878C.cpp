#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        long long n, k, x; cin>>n>>k>>x;
        while ((k > 0 && n > 0) && x > 0) {
            x -= n;
            n--;
            k--;
        }
        if ((k == 0 && x <= 0) && n >= 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}