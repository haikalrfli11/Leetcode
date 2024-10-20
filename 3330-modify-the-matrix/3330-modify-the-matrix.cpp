class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
         for(int i = 0; i < matrix.size(); i++) {
    for(int j = 0; j < matrix[i].size(); j++) {
      if(matrix[i][j] == -1) {
        int maks = -1;
        for(int k = 0; k < matrix.size();k++) {
          if(matrix[k][j] > maks) {
            maks = matrix[k][j];
          }
        }
        matrix[i][j] = maks;
      }
    }
  }
  return matrix;
    }
};