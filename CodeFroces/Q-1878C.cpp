#include<bits/stdc++.h>
using namespace std;
int main() {

    // if x lies between maximum sum and minimum sum then it is possible to make the number 
    //else it is not possible to make the number 

    int t; cin>>t;
    while (t--) {
        long long n, k, x; cin>>n>>k>>x;
        long long summin = 0;
        long long summax = 0;
        summin = k*(k+1)/2;
        summax = n*(n+1)/2 - (n-k)*(n-k+1)/2;

        if (summin <= x && x <= summax) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}