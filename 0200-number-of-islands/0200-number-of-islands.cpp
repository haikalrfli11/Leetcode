class Solution {
public:
   
    void graph(int row, int col, vector<vector<char>> &grid,vector<vector<bool>> &visited, int m, int n) {

    if (row < 0 || row >= m || col < 0 || col >= n || visited[row][col] || grid[row][col] != '1') return;

    visited[row][col] = true;
    if (row + 1 < m && grid[row + 1][col] == '1' && !visited[row + 1][col]) {
        visited[row][col] = true;
    }
    if (row - 1 >= 0 && grid[row - 1][col] == '1' && !visited[row - 1][col]) {
        visited[row][col] = true;

    }
    if (col + 1 < n && grid[row][col + 1] == '1' && !visited[row][col + 1]) {
        visited[row][col] = true;

    }
    if (col - 1 >= 0 && grid[row][col - 1] == '1' && !visited[row][col - 1]) {
       visited[row][col] = true;
    }

    graph(row+1,col,grid,visited,m,n);
    graph(row-1,col,grid,visited,m,n);
    graph(row,col+1,grid,visited,m,n);
    graph(row,col-1,grid,visited,m,n);
    
}
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        vector<bool> visited_node(m*n, false);
            int total_islands = 0;
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                if(!visited[i][j] && grid[i][j] == '1') {
                    graph(i,j,grid,visited,m,n);
                    total_islands++;
                }
                }
                
            }
              

            return total_islands;

        
    }
};