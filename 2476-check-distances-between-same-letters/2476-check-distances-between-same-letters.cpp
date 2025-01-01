class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
         bool check = true;
      for(int i = 97; i < 123; i++ ){
        char temp = int(i);
        int dis = i - 97;
        int res = 0;
        int a = 0;
        int b = 0;
          int first = 0;
        for(int j = 0; j < s.length(); j++) {
          if(s[j] == temp && first == 0) {
            a +=j;
            first++;
          }else if(s[j] == temp){
            b += j;
          }
        }
        res = abs(a-b)-1;
        if(res != distance[dis] && res != -1) check = false;
      }
      return check;
    }
};