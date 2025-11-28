#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if (a+c > b+c) {
            cout<<"First";
        } else if (a+c < b+c) {
            cout<<"Second";
        }
        else if (sum % 2 == 0) {
            cout<<"Second";
        } else {
            cout<<"First";
        }
        cout<<endl;
    }
    return 0;
}