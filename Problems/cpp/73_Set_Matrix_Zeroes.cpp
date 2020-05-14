/*
Question Link :- https://leetcode.com/problems/set-matrix-zeroes/
*/

class Solution
{
public:
  void setZeroes(vector<vector<int>> &matrix)
  {
    int N = matrix.size();
    int M = matrix[0].size();
    int chk_row = 0, chk_col = 0;
    for (int i = 0; i < N; i++)
    {
      if (matrix[i][0] == 0)
      {
        chk_row = 1;
        break;
      }
    }
    for (int i = 0; i < M; i++)
    {
      if (matrix[0][i] == 0)
      {
        chk_col = 1;
        break;
      }
    }
    for (int i = 1; i < N; i++)
    {
      for (int j = 1; j < M; j++)
      {
        if (matrix[i][j] == 0)
        {
          matrix[i][0] = 0;
          matrix[0][j] = 0;
        }
      }
    }
    for (int i = 1; i < N; i++)
    {
      for (int j = 1; j < M; j++)
      {
        if (matrix[i][0] == 0 || matrix[0][j] == 0)
          matrix[i][j] = 0;
      }
    }
    if (chk_row)
    {
      for (int i = 0; i < N; i++)
        matrix[i][0] = 0;
    }
    if (chk_col)
    {
      for (int i = 0; i < M; i++)
        matrix[0][i] = 0;
    }
  }
};
