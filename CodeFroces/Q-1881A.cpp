#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> result;
    int t; cin>>t;
    while (t) {
        t--;
        int n, m; cin>>n>>m;
        string x,s; cin>>x>>s;
        int count = 0;
        bool found = false;
        while (count < 6) {
            if (x.find(s) != string::npos) {
            result.push_back(count);
            found = true;
            break;
            }
            x+=x;
            count++;
        }
        if (found == false) {
            x+=x;
            count++;
            if (x.find(s) != string::npos) {
            result.push_back(count);
            found = true;
        }
        }
        if (found == false) {
            result.push_back(-1);
        } 
    }
    for (auto val: result) {
        cout<<val<<endl;
    }
    return 0;
}