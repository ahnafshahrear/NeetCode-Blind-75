class Solution {
public:
    void calculate(vector<int> &candidates, int target, int sum, int index, vector<int> &combination, vector<vector<int>> &ans)
    {
        if (sum == target)
        {
            ans.push_back(combination);
            return;
        }
        if (sum > target) return;
        for (int i = index; i < candidates.size(); i++)
        {
            combination.push_back(candidates[i]);
            calculate(candidates, target, sum + candidates[i], i, combination, ans);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> combination;
        vector<vector<int>> ans;
        calculate(candidates, target, 0, 0, combination, ans);
        return ans;
    }
};
