class Solution {
public:
    vector<int> countBits(int n)
    {
        vector<int> bitsCount(n + 1, 0);
        for (int index = 0; index <= n; index++)
        {
            bitsCount[index] = bitsCount[index >> 1] + (index & 1);
        }
        return bitsCount;
    }
};
