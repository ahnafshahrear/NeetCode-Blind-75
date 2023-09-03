class Solution {
public:
    int maxArea(vector<int> &height)
    {
        int area = 0;
        int start = 0, end = height.size() - 1;
        while (start < end)
        {
            int currentArea = (end - start) * min(height[start], height[end]);
            if (height[start] < height[end]) start++;
            else end--;
            area = max(area, currentArea);
        } 
        return area;
    }
};
