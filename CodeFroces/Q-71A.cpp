#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> ansString;
    int t; cin >> t;
    while (t) {
        t--;
        string input; cin >> input;
        if (input.length() > 10) {
            char firstchar = input[0];
            char lastchar = input[input.size()-1];
            string number = to_string(input.length()-2);
            ansString.push_back(firstchar+number+lastchar);
        } else {
            ansString.push_back(input);
        }
    }
    for (auto it: ansString) {
        cout<<it<<endl;
    }
    return 0;
}