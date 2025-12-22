#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int ans = 0;

        int a,b,c,d; cin>>a>>b>>c>>d;
        
        if(d < b) {
            cout<<"-1"<<endl;
            continue;
        } 

        ans += (b-d);
        a += ans;
        ans += (a-c);
        if (c > a) {
            cout<<"-1"<<endl;
        } else {
            cout<<ans<<endl;
        }
    }
    return 0;
}