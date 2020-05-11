/*
Question Link :- https://leetcode.com/problems/complement-of-base-10-integer/
*/

class Solution
{
public:
  int bitwiseComplement(int N)
  {
    int res = 0, i = 0;
    while (N)
    {
      res += (!(N % 2)) << i++;
      N /= 2;
    }
    return i ? res : 1;
  }
};