class Solution {
public:
int travel(int row, int col,int m, int n,  vector<vector<int>> &grid,vector<vector<bool>> &visited) {
        if(row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == 0 || visited[row][col]) return 0;
        visited[row][col] = true;
    // cout << "Visiting (" << row << ", " << col << ")" << endl;

    //     if (row + 1 < m && grid[row + 1][col] == 1 && !visited[row + 1][col]) {
    //     visited[row][col] = true;
    // }
    //     if (row - 1 >= 0 && grid[row - 1][col] == 1 && !visited[row - 1][col]) {
    //     visited[row][col] = true;

    // }
    //     if (col + 1 < n && grid[row][col + 1] == 1 && !visited[row][col + 1]) {
    //     visited[row][col] = true;

    // }
    //     if (col - 1 >= 0 && grid[row][col - 1] == 1 && !visited[row][col - 1]) {
    //         visited[row][col] = true;
    // }
    return 1 +travel(row+1,col,m,n,grid,visited)
            +travel(row-1,col,m,n,grid,visited)
            +travel(row,col+1,m,n,grid,visited)
            + travel(row,col-1,m,n,grid,visited);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
      int n = grid[0].size();
      int maks = 0;
      vector<vector<bool>> visited(m, vector<bool>(n,false));
      for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(!visited[i][j] && grid[i][j] == 1) {
                int temp = travel(i,j,m,n,grid,visited);
                maks = max(maks,temp);
            }
        }
      }
      return maks;
    }
};