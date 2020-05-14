/*
Question Link :- https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
*/

class Solution
{
public:
  bool hasGroupsSizeX(vector<int> &deck)
  {
    unordered_map<int, int> counts;
    for (int card : deck)
      counts[card]++;
    int gcd = counts[deck[0]];
    for (auto count : counts)
    {
      gcd = __gcd(gcd, count.second);
      if (gcd == 1)
        return false;
    }
    return true;
  }
};
