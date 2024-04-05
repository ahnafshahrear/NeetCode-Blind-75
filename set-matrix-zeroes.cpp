class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix) 
    {
        int mark = 1;
        int rows = matrix.size(), cols = matrix[0].size();

        for (int r = 0; r < rows; r++)
        {
            for (int c = 0; c < cols; c++)
            {
                if (!matrix[r][c])
                {
                    matrix[r][0] = 0;
                    if (c) matrix[0][c] = 0;
                    else mark = 0; 
                }
            }
        }

        for (int c = 1; c < cols; c++)
        {
            if (!matrix[0][c])
            {
                for (int k = 0; k < rows; k++)
                {
                    matrix[k][c] = 0;
                }
            }
        }

        for (int r = 0; r < rows; r++)
        {
            if (!matrix[r][0])
            {
                for (int k = 0; k < cols; k++)
                {
                    matrix[r][k] = 0;
                }
            }
        }

        if (!mark) 
        {
            for (int k = 0; k < rows; k++)
            {
                matrix[k][0] = 0;
            }
        }
    }
};
