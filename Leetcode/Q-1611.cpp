#include <bits/stdc++.h>
using namespace std;
int minimumOneBitOperations(int n)
{
    if (n == 0)
        return 0;
    vector<long long> bits(31, 0);
    bits[0] = 1;
    for (int i = 1; i < 31; ++i)
    {
        bits[i] = 2 * (bits[i - 1]) + 1;
    }

    int result = 0, sign = 1;
    for (int i = 30; i >= 0; --i)
    {
        int bit = (1 << bits[i]) & n;
        if (bit == 0)
        {
            continue;
        }
        else
        {
            if (sign > 0)
            {
                result += bits[i];
                sign = -1;
            }
            else
            {
                result -= bits[i];
                sign = 1;
            }
        }
    }
    return result;
}
int main()
{
    int ans = minimumOneBitOperations(3);
    cout<<"The ans is: "<<ans;
    return 0;
}