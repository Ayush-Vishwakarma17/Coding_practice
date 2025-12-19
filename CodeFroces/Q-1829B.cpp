#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        int maxcount = 0;
        int count = 0;
        while (n) {
            n--;
            int x; cin>>x;
            if (x == 0) {
                count++;
                maxcount = max(maxcount, count);
            } else {
                count = 0;
            }
        }
        cout<<maxcount<<endl;
    }
    return 0;
}