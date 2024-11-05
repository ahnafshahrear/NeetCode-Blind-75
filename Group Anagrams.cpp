class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;

        for (string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            anagrams[key].push_back(str);
        }
        vector<vector<string>> groups;

        for (auto& group : anagrams) {
            groups.push_back(group.second);
        }
        return groups;
    }
};
