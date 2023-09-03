class Solution {
public:
    bool containsDuplicate(vector<int> &nums) 
    {
        unordered_set<int> uniqSet;
        for (int num: nums)
        {
            if (uniqSet.count(num)) return true;
            uniqSet.insert(num);
        }
        return false;
    }
};
