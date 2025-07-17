class Solution {
public:

      int f(int row, int col,  vector<vector<int>> &triangle, vector<vector<int>> &dp) {
             if(dp[row][col] != -100000) return dp[row][col];
        if(row == 0) {
            return triangle[0][0];
        }

        if(col == 0 ){
            dp[row][col] =  triangle[row][col] + f(row-1,col,triangle,dp);
        }else if(col == triangle[row-1].size()) {
            dp[row][col] = triangle[row][col] + f(row-1,col-1,triangle,dp);
        }else {
            dp[row][col] = triangle[row][col] + min(f(row-1,col,triangle,dp),f(row-1,col-1,triangle,dp));
        }
        return dp[row][col];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
         vector<vector<int>> dp(triangle.size());
        for(int i = 0; i  < triangle.size(); i++) {
            for(int j = 0; j < triangle[i].size(); j++) {
                dp[i].push_back(-100000);
            }
        }
        dp[0][0] = triangle[0][0];
        int row = triangle.size()-1;
        int minim = INT_MAX;
        for(int col = 0; col < triangle[row].size(); col++) {
                int temp = f(row,col,triangle,dp);
                if(temp < minim) {
                    minim = temp;
                }
        }
     

        int res = INT_MAX;
        
           for(int i = 0; i  < triangle[row].size(); i++) {
                if(dp[row][i] < res) res = dp[row][i];
        }
        return res;
    }
};