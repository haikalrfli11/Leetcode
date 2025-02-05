class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length() != s2.length()) {
            return false;
        }else if(s1 == s2) {
            return true;
        }else {
            bool check = false;
            for(int i = 0; i < s1.length(); i++)  {
            for(int j = i+1; j < s1.length(); j++) {
                string res = s1;
                char temp = res[i];
                res[i] = res[j];
                res[j] = temp;
                cout << res << endl;
                if(res == s2) {
                    check = true;
                }
            }
       }
        return check;
        }
    }
};