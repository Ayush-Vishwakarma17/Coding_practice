#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        long long n, k, x; cin>>n>>k>>x;
        long long summin = 0;
        long long summax = 0;
        for (int i = 1; i <= n; i++) {
            
            summin += i;
            k--;
            if (k == 0) {
                break;
            }
            
        }
        for (int i = n; i >= 1 ; i--) {
            summax += i;
            k--;
            if (k == 0) {
                break;
            }
        }
        if (summin <= x && x <= summax) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}