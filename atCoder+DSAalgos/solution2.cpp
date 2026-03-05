#include<bits/stdc++.h>
using namespace std;
string manipulate (string st,int size) {
    string ans = "";
    int dots = (size - st.length())/2;
    string dot = "";
    while (dots--) {
        dot += '.';
    }
    ans = dot + st + dot;
    return ans;
}
int main() {
    int n; cin>>n;
    vector<string> s;
    int maxsize = 0;
    for (int i = 0; i < n; i++) {
        string S; cin>>S;
        int size = S.length();
        maxsize = max(maxsize, size);
        s.push_back(S);
    }
    for (int i = 0; i < s.size(); i++) {
        s[i] = manipulate(s[i], maxsize);
    }
    for (auto it: s) {
        cout<<it<<endl;
    }
    return 0;
}