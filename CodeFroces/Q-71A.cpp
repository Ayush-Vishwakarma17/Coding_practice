#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> result;
    int t; cin >> t;
    while (t) {
        t--;
        string input; cin >> input;
        if (input.length() > 10) {
            char first = input[0];
            char last = input[input.size()-1];
            string number = to_string(input.length()-2);
            result.push_back(first+number+last);
        } else {
            result.push_back(input);
        }
    }
    for (auto it: result) {
        cout<<it<<endl;
    }
    return 0;
}