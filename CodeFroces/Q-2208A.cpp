#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int row; cin>>row;
        int n = row*row;
        int total = n;
        bool flag = false;
        map<int, int> freq;

        while (n--) {
            int x; cin>>x;
            freq[x]++;
            if (freq[x] >= (total - row)) {
                flag = true;
            }
        }
        if (flag) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}