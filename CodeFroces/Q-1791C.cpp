#include<bits/stdc++.h>
using namespace std; 
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n;cin>>n;
        string s; cin>>s;
        int i = 0, j = n-1;
        while (i < j) {
            if (s[i] == '0' && s[j] == '1') {
                i++;
                j--;
            } else if (s[i] == '1' && s[j] == '0') {
               i++;
               j--; 
            } else {
                break;
            }
        }
        int len = 0;
        if (j < i) {
            cout<<len<<endl;
            continue;
        }
        len = j-i+1;
        cout<<len<<endl;
    }
    return 0;
}