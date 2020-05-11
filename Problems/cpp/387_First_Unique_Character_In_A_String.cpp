/*
Question Link :- https://leetcode.com/problems/first-unique-character-in-a-string/
*/

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int len = s.length();
        unordered_map<char, pair<int, int>> mp;
        for (int i = 0; i < len; i++)
        {
            if (mp.find(s[i]) == mp.end())
                mp[s[i]] = {2, i};
            else
                mp[s[i]] = {1, i};
        }
        int Ans = len;
        for (auto i : mp)
        {
            pair<int, int> val = i.second;
            if (val.first == 2)
                Ans = min(Ans, val.second);
        }
        if (Ans == len)
            return -1;
        return Ans;
    }
};