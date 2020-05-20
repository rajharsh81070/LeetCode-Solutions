class Solution
{
public:
  bool checkInclusion(string p, string s)
  {
    vector<int> hash_p(26, 0), hash_s(26, 0);
    int len1 = p.length();
    int len2 = s.length();
    for (int i = 0; i < len1; i++)
      hash_p[p[i] - 'a']++;
    for (int i = 0; i < len2; i++)
    {
      hash_s[s[i] - 'a']++;
      if (i < len1 - 1)
        continue;
      else
      {
        if (hash_p == hash_s)
          return true;
        hash_s[s[i - len1 + 1] - 'a']--;
      }
    }
    return false;
  }
};