class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int result = INT_MIN;

        for (int& n : nums) {
            sum += n;
            result = max(result, sum);
            if (sum < 0) sum = 0;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/maximum-subarray/description/
// Time Complexity: O(n)
