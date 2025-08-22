class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
         int x_min = INT_MAX;
   int y_min = INT_MAX;

   int x_max = INT_MIN;
   int y_max = INT_MIN;

   for(int i = 0; i < grid.size(); i++) {
      for(int j = 0; j < grid[i].size(); j++) {
         if(grid[i][j] == 1) {
            if(j < x_min) x_min = j;
            if(j > x_max) x_max = j;
            if(i > y_max) y_max = i;
            if(i < y_min) y_min = i;
         
         }

      }
   }

   return (x_max - x_min + 1) * (y_max- y_min + 1); 
        
    }
};