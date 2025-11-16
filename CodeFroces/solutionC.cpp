#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin >>a>>b>>c;
    vector<int> nums;
    nums.push_back(a);  
    nums.push_back(b);  
    nums.push_back(c);
    sort(nums.begin(), nums.end());
    int diff = nums[2] - nums[0];
    if (diff >= 10) {
        cout<<"check again";
    } else {
        cout<<"final " << nums[1];
    }
    return 0;
}