/*
Question Link :- https://leetcode.com/problems/fibonacci-number/
*/

class Solution
{
public:
  int fib(int N)
  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a = 0, b = 1;
    if (N == 0)
      return a;
    if (N == 1 || N == 2)
      return b;
    for (int i = 2; i <= N; i++)
    {
      int c = a + b;
      a = b;
      b = c;
    }
    return b;
  }
};