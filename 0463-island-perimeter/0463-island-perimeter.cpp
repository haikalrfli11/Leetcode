class Solution {
public:

vector<int> adj[100*100];
void graph(int row, int col, vector<vector<int>> &grid,vector<vector<bool>> &visited, int m, int n) {

    if (row < 0 || row >= m || col < 0 || col >= n || visited[row][col] || grid[row][col] != 1) return;

    visited[row][col] = true;
    int node = row * n + col; // Indeks node saat ini

    // Periksa tetangga dan tambahkan ke adj
    if (row + 1 < m && grid[row + 1][col] == 1 && !visited[row + 1][col]) {
        int neighbor = (row + 1) * n + col;
        adj[node].push_back(neighbor);
        adj[neighbor].push_back(node); // Graf tak berarah
    }
    if (row - 1 >= 0 && grid[row - 1][col] == 1 && !visited[row - 1][col]) {
        int neighbor = (row - 1) * n + col;
        adj[node].push_back(neighbor);
        adj[neighbor].push_back(node);
    }
    if (col + 1 < n && grid[row][col + 1] == 1 && !visited[row][col + 1]) {
        int neighbor = row * n + (col + 1);
        adj[node].push_back(neighbor);
        adj[neighbor].push_back(node);
    }
    if (col - 1 >= 0 && grid[row][col - 1] == 1 && !visited[row][col - 1]) {
        int neighbor = row * n + (col - 1);
        adj[node].push_back(neighbor);
        adj[neighbor].push_back(node);
    }

    graph(row+1,col,grid,visited,m,n);
    graph(row-1,col,grid,visited,m,n);
    graph(row,col+1,grid,visited,m,n);
    graph(row,col-1,grid,visited,m,n);
    
}
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false)); 
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
       if(!visited[i][j]) {
        graph(i,j,grid,visited,m,n);
       }
    }
    
}

int perimeter = 0;

for(int i = 0; i < m*n; i++) {
        int row = i / n;
    int col = i % n;
    if(grid[row][col] == 1) perimeter += 4 -(adj[i].size());
}
    return perimeter;
        
    }
};