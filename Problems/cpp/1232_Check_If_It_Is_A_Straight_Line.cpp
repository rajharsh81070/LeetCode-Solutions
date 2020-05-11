/*
Question Link :- https://leetcode.com/problems/check-if-it-is-a-straight-line/
*/

class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int N = coordinates.size();
        sort(coordinates.begin(), coordinates.end());
        if (N == 1)
            return true;
        int slope = INT_MIN;
        if ((coordinates[1][0] - coordinates[0][0]) != 0)
            slope = (coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);
        for (int i = 2; i < N; i++)
        {
            int tmp_slope = INT_MIN;
            if ((coordinates[i][0] - coordinates[i - 1][0]) != 0)
                tmp_slope = (coordinates[i][1] - coordinates[i - 1][1]) / (coordinates[i][0] - coordinates[i - 1][0]);

            if (tmp_slope != slope)
                return false;
        }
        return true;
    }
};