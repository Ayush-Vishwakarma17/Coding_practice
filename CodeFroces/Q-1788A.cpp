#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin >> n;
        vector<int> nums(n, 0);
        int totalTwo = 0;
        for (int i = 0; i < n; i++) {
            cin>>nums[i];
            if (nums[i] == 2) {
                totalTwo++;
            } 
        }
        int count = 1;
        int initialTwo = 0;
        bool found = false;
        for (int i = 0; i < nums.size()-1; i++) {
            int tempMulti = totalTwo;
            if (nums[i] == 2) {
                initialTwo++;
            }
            tempMulti -= initialTwo;
            if (tempMulti == initialTwo) {
                cout<< count <<endl;
                found = true; 
                break;
            }
            count++;
        }
        if (found == false) {
            cout<<-1<<endl;
        }
    }
    return 0;
}