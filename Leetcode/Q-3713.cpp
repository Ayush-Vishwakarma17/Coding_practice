/*
------------ O of n cube solution so bad but i tried ---------------

class Solution {
public:
    int longestBalanced(string s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            vector<int> arr(26,0);
            for (int j = i; j < s.length(); j++) {  
                int idx = s[j] - 'a';
                arr[idx] += 1;
                set<int> st; 
                for (auto it: arr) {
                    st.insert(it);
                } 
                if (st.size() == 2) {
                    result = max(result, j-i+1);
                }
            }
        }
        return result;
    }
};



-------------- O of n square solution ------------------
this solution i made with some issues by not passing by the refference making copy every time for map takes alot of 
time so do pass by refference if you are not manipulating the map or data structure!

class Solution {
public:
bool isBalance(unordered_map<char,int>&freq) {
    int num = 0;
    for (auto &it: freq) {
        if (it.second != 0) {
            num = it.second;
            break;
        }
    }
    for (auto &it: freq) {
        if (num != it.second) {
            return false;
        }
    }
    return true;
}
    int longestBalanced(string s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            unordered_map<char,int> freq;
            for (int j = i; j < s.length(); j++) {  
                freq[s[j]]++;
                if (isBalance(freq)) {  
                    result = max(result, j-i+1);
                }
            }
        }
        return result;
    }
};


*/