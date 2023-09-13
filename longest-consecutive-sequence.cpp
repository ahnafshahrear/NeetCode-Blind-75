class Solution {
public:
    int longestConsecutive(vector<int> &nums) 
    {
        unordered_set<int> numbers(nums.begin(), nums.end());
        int longest = 0;
        for (int x: numbers)
        {
            if (!numbers.count(x - 1))
            {
                int count = 1;
                while (numbers.count(x + count))
                {
                    count++;
                }
                longest = max(longest, count);
            }
        } 
        return longest; 
    }
};
