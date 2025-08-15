class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> temp(n, vector<int>(n,0));
        for(int  i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                temp[j][i] = matrix[n-1-i][j];
            
            }
        }
        matrix = temp;
    }
};