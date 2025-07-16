class Solution {
public:
    vector<int> getRow(int rowIndex) {
       int numRows = rowIndex+1;

        vector<vector<int>> pascal = {{1}};

        
            for(int i = 1; i < numRows; i++) {
                vector<int> temp(i+1,0);
                temp[0] = 1;
                temp[temp.size()-1] =1;
                if(i > 1) {
                    for(int j = 0; j < pascal[i-1].size()-1; j++ ) {
                        temp[j+1] = pascal[i-1][j] + pascal[i-1][j+1];
                    }
                }
                pascal.push_back(temp);
            }
        
  
      

        vector<int> result;

        result = (pascal[numRows-1]);
        return result;
        
    }
};