class Solution {
public:
    int getSum(int a, int b)
    {
        while (b) 
        {
            unsigned carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};
