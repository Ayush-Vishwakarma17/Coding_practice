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
----------- This solution is using unordered map ---------
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


-------------- O of n square solution ------------------
----------- This solution is using a fixed size array -----------


class Solution {
public:
bool isBalanced(vector<int> &freq) {
    int num = 0;
    for (auto val: freq) {
        if (val > 0) {
            num = val;
            break;
        }
    }
    for (auto val: freq) {
        if (val == 0 || val == num) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}
    int longestBalanced(string s) {
        int maxlength = 0;
          for (int i = 0; i < s.length(); i++) {
            vector<int> freq(26,0);
            for (int j = i; j < s.length(); j++) {
                int idx = s[j]-'a';
                freq[idx]++;
                if (isBalanced(freq)) {
                    maxlength = max(maxlength, j-i+1);
                }    
            }
        }
        return maxlength;
    }
};

*/