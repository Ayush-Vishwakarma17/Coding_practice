/*

---------------- my long solution to solve this problem ----------------
-----------------Total brute and simple approach -----------------------


-------- time complexity depends on the longest string size -------------
TC is O(max(m,n)) where m is a.length(), and n is b.length();


my initution was there is three case of binary addition 

if carry , first bit and second bit sum is 3 then manage carry
if carry , first bit and second bit sum is 2 then manage carry
if carry , first bit and second bit sum is 1 or 0 then manage carry 

after understanding these three cases i was able to solve this problme by my own 


class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j = b.length()-1;
        int carry = 0;
        string result = "";
        while (i >= 0 && j >= 0) {
            int bit1 = a[i]-'0';
            int bit2 = b[j]-'0';
            int sum = bit1 + bit2 + carry;
            if (sum == 2) {
                result += '0';
                carry = 1;
            } else if (sum == 3) {
                result += '1';
                carry = 1;
            } else if (sum == 1) {
                result += '1';
                carry = 0;
            } else {
                result += '0';
                carry = 0;
            }
            i--;
            j--;
        }
        while (i >= 0) {
            int bit = a[i] - '0';
            int sum = bit + carry;
            if (sum == 2) {
                result += '0';
                carry = 1;
            } else if (sum == 1) {
                result += '1';
                carry = 0;
            } else {
                result += '0';
                carry = 0;
            }
            i--;
        }
        while (j >= 0) {
            int bit = b[j] - '0';
            int sum = bit + carry;
            if (sum == 2) {
                result += '0';
                carry = 1;
            } else if (sum == 1) {
                result += '1';
                carry = 0;
            } else {
                result += '0';
                carry = 0;
            }
            j--;
        }
        if (carry > 0) {
            result += '1';
        }
        reverse(result.begin(), result.end());
        return result;
    }
};


*/