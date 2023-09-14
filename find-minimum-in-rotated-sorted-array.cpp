class Solution {
public:
    int findMin(vector<int> &nums) 
    {
        int low = 0, high = nums.size() - 1;
        while (high - low > 1)
        {
            int mid = (high + low) >> 1;
            if (nums[low] < nums[mid])
            {
                if (nums[high] < nums[mid]) low = mid;
                else high = mid;
            }
            else if (nums[low] > nums[mid] and nums[high] > nums[mid])
            {
                high = mid;
            }
            else low = mid;
        }
        if (nums[low] > nums[high])
        {
            return nums[high];
        }
        return nums[low];
    }
};
