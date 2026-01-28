#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n,s,x; cin>>n>>s>>x;
        int sum = 0;
        while (n--) {
            int num;
            cin>>num;
            sum += num;
        }
        if (sum > s) {
            cout<<"NO"<<endl;
        } else {
            s -= sum;
            if (s % x == 0) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}