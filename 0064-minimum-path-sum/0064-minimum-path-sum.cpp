class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
          int m = grid.size();
    int n = grid[0].size();
     int dp[m+1][n+1];
    dp[1][1] = grid[0][0];
     for(int i = 2; i <= m; i++) {
        dp[i][1] = dp[i-1][1] + grid[i-1][0]; 
        
     }
     for(int i = 2; i <= n; i++) {
        dp[1][i] = dp[1][i-1] + grid[0][i-1]; 
        
     }

     for(int i = 2; i <= m; i++) {
       for(int j = 2; j<=n; j++) {
        dp[i][j] = grid[i-1][j-1] + min(dp[i-1][j],dp[i][j-1]);
       }
     }
     return dp[m][n];
    }
};