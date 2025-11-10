#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    int count = 0;
    while (t) {
        t--;
        string op; cin>>op;
        if (op == "X++" || op == "++X") {
            count++;
        } else {
            count--;
        }
    }
    cout << count;
    return 0;
}