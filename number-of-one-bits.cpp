class Solution {
public:
    int hammingWeight(uint32_t n)
    {
        int one = 0;
        while (n)
        {
            one += (n % 2);
            n /= 2;
        }
        return one;
    }
};
