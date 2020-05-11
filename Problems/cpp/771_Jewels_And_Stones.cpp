/*
Question Link :- https://leetcode.com/problems/jewels-and-stones/
*/

class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        unordered_map<char, int> mp;
        int N = S.length();
        for (int i = 0; i < N; i++)
            mp[S[i]]++;
        int M = J.length();
        int Ans = 0;
        for (int i = 0; i < M; i++)
            Ans += mp[J[i]];
        return Ans;
    }
};