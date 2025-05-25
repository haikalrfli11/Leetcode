class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;

    for(int i = 0; i  <s.length(); i++) {
        string cur = "";
        cur += s[i];
        for(int j = i+1; j < s.length(); j++) {
            if(cur.find(s[j]) > cur.length()) {
                cur += s[j];
            }
            else if(cur.find(s[j]) < cur.length()) {
                j = s.length();
            }
        }
    
    
    if(cur.length() > maxLen) {
        maxLen = cur.length();
    }
    }
    return maxLen;
    }
};