class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
         vector<int> idx_c;
      vector<int> idx_s;

      for(int i = 0; i < s.length(); i++) {
         if(s[i] == c) idx_c.push_back(i);
      }
      for(int i = 0; i < s.length(); i++) {
         int abs_min = abs(i-idx_c[0]);
         for(int j = 0; j < idx_c.size(); j++) {
               if(abs(idx_c[j] - i ) <= abs_min) {
                  abs_min = abs(idx_c[j] - i);
               }
         }
         idx_s.push_back(abs_min);
         
      }
      return idx_s;
    }
};