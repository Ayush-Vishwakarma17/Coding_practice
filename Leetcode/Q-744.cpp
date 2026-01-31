/*
-------------------- Linear Solution of this problem! --------------------

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int val = target;
        for (auto it: letters) {
            int val2 = it;
            if (val2 > val) {
                return val2;
            }
        }
        return letters[0];
    }
};

------------------ Optimal Solution (Binary Search) -------------------

--------------- Binary Search implementation of this problem -------------


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size()-1;
        if (letters[r] <= target) {
            return letters[0];
        }
        while (l < r) {
            int mid = l + (r-l)/2;
            if (letters[mid] > target) {
                r = mid;
            } else {
                l = mid + 1;
            }            
        }
        return letters[l];
    }
};




*/