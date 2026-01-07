#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector<int> a(n,0);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int num1 = a[0];
        if (num1 == 0) {
            int num2 = a[1];
            int num3 = a[a.size()-1];
            if (num2 == 0 && num3 == 0) {
                cout<<"Bob"<<endl;
            } else if ((num2 == 0 && num3 == 1) || num2 == 1 && num3 == 0) {
                cout<<"Bob"<<endl;
            } else {
                cout<<"Alice"<<endl;
            }
        } else {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}