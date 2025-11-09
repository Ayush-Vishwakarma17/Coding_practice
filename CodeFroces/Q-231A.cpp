#include<bits/stdc++.h>
using namespace std;

int main() {
    int problemCount = 0;
    int n; cin>>n;
    while (n) {
        n--;
        int a, b, c; cin>>a>>b>>c;
        if ((a+b+c) >= 2) {
            problemCount++;
        } else {
            continue;
        }
    }
    cout<<problemCount;
    return 0;
}