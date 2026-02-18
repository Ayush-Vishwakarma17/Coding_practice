/*


Easy marked

---------- first made the bit representation form and after that checked for the alternative -----------------

class Solution {
public:
    bool hasAlternatingBits(int n) {
        string bits = "";
        while(n!=0) {
            bits = char((n%2)+'0')+bits;
            n/=2;
        }
        for (int i = 1; i < bits.length(); i++) {
            if(bits[i-1] == bits[i]) {
                return false;
            }
        }
        return true;
    }
};


*/