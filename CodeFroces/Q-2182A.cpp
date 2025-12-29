#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        int count = 0;
        string s; cin>>s;
        int i = 0;
        bool check  = false;
        while(i < s.length()-3) {
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6') {
                check = true;
            }
            i++;
        }
        i = 0;
        while(i < s.length()-3) {
            if (check) {
                break;
            }
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5') {
                count++;
                break;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}