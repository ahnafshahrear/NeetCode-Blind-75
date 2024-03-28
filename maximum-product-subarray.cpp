class Solution {
public:
    int maxProduct(vector<int> &nums) 
    {
        int ans = nums[0], curMin = 1, curMax = 1;

        for (int num: nums)
        {
            int temp = curMax * num;
            curMax = max(max(curMax * num, curMin * num), num);
            curMin = min(min(temp, curMin * num), num);
            ans = max(curMax, ans);
        }

        return ans;
    }
};
