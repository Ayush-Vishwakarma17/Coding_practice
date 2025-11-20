#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> result;
    int t; cin>>t;  
    while (t) {

        t--;
        int n; cin>>n;

        if (n%2 != 0) {
            result.push_back(0);
        } else if (n >= 4){
            if (n%4 == 0) {
                result.push_back((n/4)+1);
            } else {
                int x = n/4;
                n%=4;
                int y = n/2;
                result.push_back(x+y);
            }
        } else {
            result.push_back(n/2);
        }
    }   
    for (auto val: result) {
        cout<<val<<endl;
    }
    return 0;
}
 