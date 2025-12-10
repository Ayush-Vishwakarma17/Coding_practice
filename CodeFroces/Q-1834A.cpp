#include<bits/stdc++.h>
using namespace std; 
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        int n; cin>>n;
        vector<int> nums;
        //making an array to store all ones and negative ones
        while (n) {
            n--;
            int x; cin>>x;
            nums.push_back(x);
        }
        //initialising neg and pos ones count 
        int neg = 0, pos = 0;
        for (auto val: nums) {
            if (val == -1) {
                neg++;
            } else {
                pos++;
            }
        }
        int ans = 0;
        //if count of pos and negative ones equal
        if (neg == pos) {
            //making sure the negative ones comes for even times
            while (neg % 2 != 0) {
                neg--;
                pos++;
                ans++;
            }
            cout<<ans<<endl;
        } // else case if count of ones and negative ones are not equal
        else {  
            //making sure the neg ones comes for even times as well as less of equal to 
            //positive ones
            while (neg % 2 != 0 || neg > pos) {
                neg--;
                pos++;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
    //returning zero as parampara! ahem ahem
    return 0;
}