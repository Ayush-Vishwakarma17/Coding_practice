#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int min_diff = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            min_diff = min(min_diff, a[i+1] - a[i]);
        }

        if (min_diff < 0) {
            cout << 1 << endl;     // array is already decreasing
        } else {
            cout << min_diff / 2 + 1 << endl;
        }
    }
    return 0;
}
