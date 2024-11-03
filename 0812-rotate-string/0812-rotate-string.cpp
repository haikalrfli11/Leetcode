class Solution {
public:
    bool rotateString(string s, string goal) {
         string cur = s;
    bool check = false;
    for(int i = 0; i < s.length(); i++) {
        char temp = cur[0];
        for(int j = 0; j < s.length();j++){
            if(j == s.length()-1) {
                cur[j] = temp;
            }else {
                cur[j] = cur[j+1];
            }
        }
       if(cur == goal) {
        check = true;
        break;
       }
        

    }

        return check;
    }
};