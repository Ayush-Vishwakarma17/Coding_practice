#include<bits/stdc++.h>
using namespace std; 
//solution for cf 1831A Twin permutation
int main() {
    int t; cin>>t;
    while (t) {
        //t for multiple testcases
        t--;
        int n; cin>>n;
        vector<int> ans;
        while (n) {
            n--;
            int x; cin>>x;
            //takin all inputs to array
            ans.push_back(x);
        }
        //my observation says if sorted then sort the elements in descending order
        for (auto it: ans) {
            cout<<(ans.size()+1-it)<<" ";
        }
        cout<<endl;
    }
    return 0;
}