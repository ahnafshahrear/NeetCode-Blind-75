class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) 
    {
        int size = nums.size();
        unordered_map<int, int> frequency;
        for (int num: nums)
        {
            frequency[num]++;
        }
        vector<vector<int>> buckets(size + 1);
        for (auto x: frequency)
        {
            buckets[x.second].push_back(x.first);
        }
        vector<int> elements;
        for (int i = size; i; i--)
        {
            for (int num: buckets[i])
            {
                elements.push_back(num);
                if (elements.size() >= k) 
                {
                    return elements;
                }
            }
        }
        return elements;
    }
};
