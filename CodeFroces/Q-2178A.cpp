#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t) {
        t--;
        string s; cin>>s;
        int county = 0;
        for (auto it: s) {
            if (it == 'Y') {
                county++;
            }
        }
        if (county >= 2) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}