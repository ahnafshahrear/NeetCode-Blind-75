class Solution {
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = nums.size();
        for (int n = 0; n < nums.size(); n++)
        {
            ans = ans ^ n ^ nums[n];
        }
        return ans;
    }
};
