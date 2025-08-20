class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> temp;

        for(int i = 0; i < grid.size();i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                temp.push_back(grid[i][j]);
            }
        }
        sort(temp.begin(), temp.end());
        int len = temp.size();
        bool remainder = true;
        for(int i = 0; i < len-1; i++) {
            if(temp[i] % x != temp[i+1]  % x) {
                remainder = false;
            }
        }
        if(remainder) {
            int median = temp[len/2];

        int total_ops = 0;
        for(int i = 0; i < len; i++ ) {
            total_ops += (abs(median-temp[i])) / x;
        } 
        return total_ops;
        }else {
            return -1;
        }
        

    }
};