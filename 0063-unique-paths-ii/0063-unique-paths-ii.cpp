class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         int m = obstacleGrid.size();
     int n = obstacleGrid[0].size();

        int dp[m+1][n+1];


        if(obstacleGrid[0][0] == 0) {
            dp[1][1] = 1;
        }else {
            dp[1][1] = 0;
        }
      
         for(int i = 0; i <= m; i++) {
        dp[i][0] = 0;
        
     }
       for(int i = 0; i <= n; i++) {
        dp[0][i] =0;

     }
  
        
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++){
                if(obstacleGrid[i-1][j-1] != 1 && (i != 1 || j!= 1)) {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }else if(obstacleGrid[i-1][j-1] == 1) {
                    dp[i][j] = 0;
                }
           }
       
   
        }   
        return dp[m][n];
    }
};