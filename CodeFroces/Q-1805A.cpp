#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t) {
        t--;
        vector<int> nums;
        int totalXor = 0;
        int n; cin>>n;
        while (n) {
            n--;
            //pushing all elements to nums
            int x; cin>>x;
            nums.push_back(x);
        }
        //finding the xor of all elements
        for (auto it: nums) {
            totalXor^=it;
        }
        //if size is even means we will xor even number of x to every elements
        //and even x xor will give you 0
        //so we will get the same xor return that's why if xor zero then print any number
        //if not zero then print negative one according to question 
        if (nums.size() % 2 == 0) {
            if (totalXor == 0) {
                cout<<1<<endl;
            } else {
                cout<<-1<<endl;
            }
        //if size is not even means a single x will get xor with total xor
        //so idea is we will take the x equal to the totalXor 
        //and two same elements xor gives zero
        } else {
            cout<<totalXor<<endl;
        }
    }
    return 0;
}