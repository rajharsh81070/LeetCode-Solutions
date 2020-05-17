class Solution
{
public:
  vector<string> simplifiedFractions(int n)
  {
    vector<string> Ans;
    if (n == 1)
      return Ans;
    for (int i = 1; i < n; i++)
    {
      for (int j = 2; j <= n; j++)
      {
        if (__gcd(i, j) == 1 && i < j)
        {
          string str = to_string(i) + "/" + to_string(j);
          Ans.push_back(str);
        }
      }
    }
    return Ans;
  }
};