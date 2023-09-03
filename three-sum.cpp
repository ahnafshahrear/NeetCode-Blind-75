class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < size - 2; i++)
        {
            if (nums[i] > 0) break;
            if (i and nums[i] == nums[i - 1]) continue;
            int start = i + 1, end = size - 1;
            while (start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                if (sum < 0) start++;
                else if (sum > 0) end--;
                else
                {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    while (start < end and nums[start] == nums[start + 1]) 
                    {
                        start++;
                    }
                    while (start < end and nums[end] == nums[end - 1]) 
                    {
                        end--;
                    }
                    start++; 
                    end--;
                }
            }
        }
        return ans;
    }
};
