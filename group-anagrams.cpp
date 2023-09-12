class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) 
    {
        vector<vector<string>> ans;
        map<string, vector<string>> anagrams;
        for (string x: strs)
        {
            string parent = x;
            sort(parent.begin(), parent.end());
            anagrams[parent].push_back(x);
        }    
        for (auto x: anagrams)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
