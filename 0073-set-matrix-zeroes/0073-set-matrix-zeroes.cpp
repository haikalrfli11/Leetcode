class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=  matrix.size();
    int col=  matrix[0].size();
    unordered_map<int,int> eligible;
      for(int i = 0; i < matrix.size();i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            int num = i * col +j;
            if(matrix[i][j] == 0) {
                eligible[num] = 1;
            }
            // cout << num << " ";
        }
        // cout << endl;
    }
    
    for(int i = 0; i < matrix.size();i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            int num = i * col +j;
            if(matrix[i][j] == 0 && eligible.find(num) != eligible.end()) {
                if(i + 1 < row) {
                    for(int k = i+1; k < row; k++) {
                        matrix[k][j] = 0;
                    }
                } 
                if(i-1 >= 0 ){
                    for(int k = i-1; k >= 0; k--) {
                        matrix[k][j] = 0;
                    }

                }
                if(j+1 < col){
                    for(int k = j+1; k < col; k++) {
                        matrix[i][k] = 0;
                    }
                }
                if(j-1 >= 0) {
                    for(int k = j-1; k >= 0; k--) {
                        matrix[i][k] = 0;
                    }
                } 
            }
        }
    }
    }
};