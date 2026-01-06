#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n, k; cin>>n>>k;
        string s; cin>>s;
        int oddCount = 0;
        int evenCount = 0;
        vector<int>freq(26,0);
        for (int i = 0; i < n; i++) {
            freq[s[i]-'a']++;
        }
        for (auto it: freq) {
            if (it % 2 == 0) {  
                evenCount+=it;
            } else {
                oddCount++;
            }
        }
        if (oddCount >= k) {
            oddCount -= k;
            k = 0;
        } else {
            k -= oddCount;
            oddCount = 0;
        }
        if (k != 0) {
            evenCount -= k;
        }
        if ((oddCount == 0 || oddCount == 1)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }   
    return 0;
}