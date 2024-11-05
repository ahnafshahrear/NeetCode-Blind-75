class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> indices;

        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                ans = {indices[target - nums[i]], i};
                break;
            }
            indices[nums[i]] = i;
        }
        return ans;
    }
};
