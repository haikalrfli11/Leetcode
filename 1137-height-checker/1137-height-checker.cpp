class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        for(int i = 0; i < heights.size(); i++) {
            expected.push_back(heights[i]);
        }
        int temp = 0;
        sort(expected.begin(),expected.end());
          for(int i = 0; i < heights.size(); i++) {
            if(heights[i] != expected[i])temp++;
        }
        return temp;
    }
};