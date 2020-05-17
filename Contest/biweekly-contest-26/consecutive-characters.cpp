class Solution
{
public:
  int maxPower(string s)
  {
    int len = s.length();
    int i = 0;
    int Ans = 0;
    while (i < len)
    {
      int cnt = 0;
      char ch = s[i];
      while (ch == s[i])
      {
        i++;
        cnt++;
      }
      Ans = max(Ans, cnt);
    }
    return Ans;
  }
};