/*
Question Link :- https://leetcode.com/problems/unique-paths-ii/
*/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int N = obstacleGrid.size();
        int M = obstacleGrid[0].size();
        // if(N==0 && M==0)
        //     return 0;
        vector<vector<int>> dp(N, vector<int> (M, 0));
        for(int i=0; i<N; i++) {
            if(obstacleGrid[i][0]!=1)
                dp[i][0] = 1;
            else
                break;
        }
        for(int i=0; i<M; i++) {
            if(obstacleGrid[0][i]!=1)
                dp[0][i] = 1;
            else
                break;
        }
        for(int i=1; i<N; i++) {
            for(int j=1; j<M; j++) {
                if(obstacleGrid[i][j]==1)
                    continue;
                else
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[N-1][M-1];
    }
};