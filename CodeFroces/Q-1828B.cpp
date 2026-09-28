#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;cin>>t;

    while (t--) {
        int n; cin>>n;
        vector<int>nums(n,0);
        for (int i = 0; i < nums.size(); i++) {
            int x; cin>>x;
            nums[i] = x;
        }
        int result  = abs(nums[0] - 1);

        //solution will go there!
        
        for (int i = 1; i < nums.size(); i++) {
            result = gcd(result, abs((nums[i]) - (i+1)));
        }

        cout<<result<<endl;
    }
    return 0;
}