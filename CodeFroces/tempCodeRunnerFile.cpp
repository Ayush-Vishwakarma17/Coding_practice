#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int a,b,c;
        cin>>a>>b>>c;
        if (b % 2 == 0) {
            cout<<"Second";
        } else {
            cout<<"first";
        }
        cout<<endl;
    }
    return 0;
}