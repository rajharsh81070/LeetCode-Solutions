/*
Question Link :- https://leetcode.com/problems/flood-fill/
*/

class Solution
{
public:
  void helperFunction(vector<vector<int>> &image, int N, int M, int i, int j, int newColor, int oldColor)
  {
    if (i < 0 || i >= N || j < 0 || j >= M || image[i][j] != oldColor)
      return;
    image[i][j] = newColor;
    helperFunction(image, N, M, i + 1, j, newColor, oldColor);
    helperFunction(image, N, M, i, j + 1, newColor, oldColor);
    helperFunction(image, N, M, i - 1, j, newColor, oldColor);
    helperFunction(image, N, M, i, j - 1, newColor, oldColor);
  }
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
  {
    int N = image.size();
    int M = image[0].size();
    // cout << N << " " << M;
    int oldColor = image[sr][sc];
    if (newColor == oldColor)
      return image;
    helperFunction(image, N, M, sr, sc, newColor, oldColor);
    return image;
  }
};