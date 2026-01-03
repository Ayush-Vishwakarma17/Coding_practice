#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        int ans = 0;
        //this commented approach gave tle
        /* for (int i = 1; i <= n; i++) {
            int count = 0;
            int temp = i;
            int num = 0;
            
            while (temp) {
                num = temp%10;
                if (num > 0) {
                    count++;
                }
                temp/=10;
            }
            if (count == 1) {
                ans++;
            }
        } */
        int digits = to_string(n).length();
        int firstdig = to_string(n)[0] - '0';
        ans = 9 * (digits-1) + firstdig;
        cout<<ans<<endl;
    }
    return 0;
}