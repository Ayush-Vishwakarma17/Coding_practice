#include<bits/stdc++.h>
using namespace std; 
int main() {
    int t; cin>>t;

    while (t) {
        t--;
        int n;cin>>n;
        string s; cin>>s;

        //simple two pointer approach to find the zero and one end combo
        int i = 0, j = n-1;
        while (i < j) {
            //if found combo of zero and one updating i and j
            if (s[i] == '0' && s[j] == '1') {
                i++;
                j--;
            } else if (s[i] == '1' && s[j] == '0') {
               i++;
               j--; 
            } else { //if can't find the combo of zero and one then break the loop
                break;
            }
        }

        //calculating the length of the string 

        int len = 0;
        //if j pointer index is less than i pointer index means possibly string was empty.
        if (j < i) {
            cout<<len<<endl;
            continue;
        }
        //calculating length of the string

        len = j-i+1;
        //printing length
        cout<<len<<endl;
    }
    return 0;
}