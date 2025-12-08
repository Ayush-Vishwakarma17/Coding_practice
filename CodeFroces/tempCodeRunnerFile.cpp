#include<bits/stdc++.h>
using namespace std; 
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        bool found = false;
        int n,k,x; cin>>n>>k>>x;
        for (int i = 1; i <= k; i++) {
            if (i != x && (n % i == 0)) {
                cout<<"YES"<<endl;
                int num = (n/i);
                cout<<num<<endl;
                while (num) {
                    cout << i <<" "; 
                    num--;
                }
                found = true;
                cout<<endl;
            }
        }
        if (found) {
            continue;
        }
        cout<<"NO";
    }
    return 0;
}