#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int x, k; cin>>x>>k;

        //if x and k both are odd or both are even.

        if (x % k == 0) {
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        } 
        //if one of x or k is odd;
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
    return 0;
}