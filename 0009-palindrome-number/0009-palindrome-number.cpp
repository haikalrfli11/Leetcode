class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
   string temp = "";
   for(int i = s.length()-1; i >= 0; i--) {
    temp += s[i];
   }
    if(temp == s) {
        return true;
    }else {
        return false;
    }
    }
};