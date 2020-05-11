/*
Question Link :- https://leetcode.com/problems/find-the-town-judge/
*/

class Solution
{
public:
    int findJudge(int N, vector<vector<int>> &trust)
    {
        int len = trust.size();
        vector<int> inDegree(N + 1, 0), outDegree(N + 1, 0);
        for (int i = 0; i < len; i++)
        {
            inDegree[trust[i][1]] += 1;
            outDegree[trust[i][0]] += 1;
        }
        for (int i = 1; i <= N; i++)
        {
            if (inDegree[i] == N - 1 && outDegree[i] == 0)
                return i;
        }
        return -1;
    }
};