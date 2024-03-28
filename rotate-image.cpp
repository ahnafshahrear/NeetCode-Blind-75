class Solution {
public:
    void rotate(vector<vector<int>> &matrix) 
    {
        int size = matrix.size();
        
        for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
