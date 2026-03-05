#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    int n = s.length()-1;
    char l = s[n];
    char f = s[0];
    if (l == f) {
        cout<<"yes";
    } else {
        cout<<"no";
    }
    return 0;
}