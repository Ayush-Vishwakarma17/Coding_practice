#include<bits/stdc++.h>
using namespace std;
vector<int> c1 = {1,-1,-1,1}, c2 = {1,1,-1,-1};
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int ans = 0;
        int a, b; cin>>a>>b;
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        set<pair<int,int>>s1, s2;
        for (int i = 0; i < c1.size(); i++) {
            s1.insert({x1+a*c1[i], y1+b*c2[i]});
            s1.insert({x1+b*c1[i], y1+a*c2[i]});
            s2.insert({x2+b*c1[i], y2+a*c2[i]});
            s2.insert({x2+a*c1[i], y2+b*c2[i]});
        }
        for (auto it: s1) {
            if (s2.count(it)) {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}