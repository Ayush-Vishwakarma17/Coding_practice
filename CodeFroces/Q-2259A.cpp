#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {   
        int n; cin>>n;
        int k; cin>>k;
        string s; cin>>s;

        int st = 0, e = k-1;
        int cost = 0;
        while (e < s.length()) {
            bool school = false;
            for (int i = st; i <= e; i++) {
                if (s[i] == '0') {
                    school = true;
                    break;
                }
            }
            if (!school) {
                cost++;
            }
            st += k; e += k;
        }
        cout<<cost<<endl;
    }
    return 0;
}