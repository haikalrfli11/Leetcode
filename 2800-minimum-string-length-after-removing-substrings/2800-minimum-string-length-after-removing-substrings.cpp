class Solution {
public:
    int minLength(string s) {
        while(s.find("AB") >= 0 and s.find("AB") <= s.length() or s.find("CD") >= 0 and s.find("CD") <= s.length()) {
        if(s.find("AB") >= 0 and s.find("AB") <= s.length()) {
            s.erase(s.find("AB"),2);
        }else if(s.find("CD") >= 0 and s.find("CD") <= s.length()) {
            s.erase(s.find("CD"),2);
        }


    }
        return s.length();
    }
};