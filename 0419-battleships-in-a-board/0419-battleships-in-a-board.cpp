class Solution {
public:
    void count( vector<vector<char>> &board,   vector<vector<bool>> &visited, int row, int col, int m, int n) {
   if(row < 0 || row >=m || col < 0 || col >= n || visited[row][col] || board[row][col] == '.') return;
   
  
   visited[row][col] = true;
   // if(row+1 < m && !visited[row+1][col] && board[row+1][col] == 'X') {
   //    visited[row][col] = true;
   // }
   // if(row-1 >= 0 && !visited[row-1][col] && board[row-1][col] == 'X') {
   //    visited[row][col] = true;
   // }
   // if(col+1 < n && !visited[row][col+1] && board[row][col+1] == 'X') {
   //    visited[row][col] = true;
   // }
   // if(col-1 >= 0 && !visited[row][col-1] && board[row][col-1] == 'X') {
   //    visited[row][col] = true;
   // }
   count(board,visited,row+1,col,m,n);
   count(board,visited,row-1,col,m,n);
   count(board,visited,row,col+1,m,n);
   count(board,visited,row,col-1,m,n);


}
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size();
   int n = board[0].size();
   vector<vector<bool>> visited(m, vector<bool>(n,false)); 

   int total = 0;
   for(int i = 0; i < m ; i++) {
      for(int j = 0; j < n; j++) {
         if(board[i][j] == 'X' && !visited[i][j]) {
            total++;
            count(board,visited,i,j,m,n);
         }
      }
   }
   return total;
    }
};