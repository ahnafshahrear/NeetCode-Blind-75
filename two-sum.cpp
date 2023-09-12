class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) 
    {
        vector<int> ans;
        unordered_map<int, int> index;
        for (int i = 0; i < nums.size(); i++)
        {
            if (index[target - nums[i]] and (index[target - nums[i]] - 1) != i)
            {
                ans.push_back(i);
                ans.push_back(index[target - nums[i]] - 1);
                break;
            }
            index[nums[i]] = i + 1;
        }
        return ans;
    }
};
