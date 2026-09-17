/*

------------ solution of 16 feb 2026 potd leetcode -----------



class Solution {
public:
    int reverseBits(int n) {
        if (n == 0) return n;

        //a result variable 

        int result = 0;

        //loop to iterate to all 32 bits

        for (int i = 0; i < 32; i++) {

        //left shifting the result by 1 to make space for the new least significant bit

            result <<= 1;

            //adding new LSB to the result

            result |= (n & 1);

            //right shifting the n to discard the already taken LSB and to get the new LSB from the left
            n >>= 1;
        }

        //returning the result
         
        return result;
    }
};

*/