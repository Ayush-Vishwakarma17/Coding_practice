#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> answer;

    int t; cin>>t;
    while (t) {
        t--;
        int n, k; cin >>n >> k;
        vector<int> inputs;
        while (n) {
            n--;
            int val; cin >> val;
            inputs.push_back(val);
        } 
        if (is_sorted(inputs.begin(), inputs.end())) {
            answer.push_back("YES");
            continue;
        } else if (k >= 2) {
            answer.push_back("YES");
        } else {
            answer.push_back("NO");
        }
    }
    for (auto ans: answer) {
        cout<<ans<<endl;
    }
    return 0;
}
