#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    vector<string> result;
    while (t) {
        t--;
        int n; cin>>n;
        string s; cin>>s;
        string t; cin>>t;
        
            unordered_map<char, int> mp1;
            unordered_map<char, int> mp2;
            for (auto it: s) {
                mp1[it]++;
            }
            for (auto it: t) {
                mp2[it]++;
            }
            bool yes = true;
            for (char ch = 'a'; ch <= 'z'; ++ch) {
                if (mp1[ch] != mp2[ch]) {
                    yes = false;
                    result.push_back("NO");
                    break;
                }
            }
            if (yes) {
                result.push_back("YES");
            }
    }
    for (auto it: result) {
        cout<<it<<endl;
    }
    return 0;
}