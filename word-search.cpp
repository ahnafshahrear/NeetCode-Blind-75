class Solution
{
public:
    bool search(vector<vector<char>> &board, string word, int r, int c, int index)
    {
        if (r < 0 or r >= board.size() or c < 0 or c >= board[0].size() or board[r][c] != word[index])
        {
            return false;
        }
        if (index == word.size() - 1) 
        {
            return true;
        }
        board[r][c] = '-';
        if (search(board, word, r + 1, c, index + 1) or
            search(board, word, r - 1, c, index + 1) or
            search(board, word, r, c + 1, index + 1) or
            search(board, word, r, c - 1, index + 1)  ) 
            {
                return true;
            }
        board[r][c] = word[index];
        return false;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        for (int r = 0; r < board.size(); r++)
        {
            for (int c = 0; c < board[0].size(); c++)
            {
                if (search(board, word, r, c, 0)) return true;
            }
        }
        return false;
    }
};
