class Solution
{
public:
  string removeKdigits(string num, int k)
  {
    if (k >= num.size())
      return string("0");

    num += '0';
    vector<char> vec;
    for (int i = 0; i < num.size(); i++)
    {
      while (!vec.empty() && num[i] < vec.back() && k)
      {
        k--;
        vec.pop_back();
      }
      vec.push_back(num[i]);
    }
    string ans;
    for (int i = 0; i < vec.size() - 1; i++)
    {
      if (!ans.empty() || vec[i] != '0')
        ans += vec[i];
    }
    return ans.empty() ? "0" : ans;
  }
};