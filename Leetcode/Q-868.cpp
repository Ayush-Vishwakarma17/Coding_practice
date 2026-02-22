/*

-------- The solution i come up with is building the string first ---------
then checked for the distance and done 

class Solution {
public:
    int binaryGap(int n) {
        string bits = "";
        int maxd = 0;
        while (n) {
            if (n % 2 == 1) {
                bits += '1';
            } else {
                bits += '0';
            }
            n /= 2;
        }
        int i = 0, j = 0;
        while (i < bits.size() && bits[i] != '1') {
            i++;
        }
        j = i+1;
        while (j < bits.size()) {
            if (bits[j] == '1') {
                maxd = max(maxd, j-i);
                i = j;
            }
            j++;
        }
        return maxd;
    }
};

*/