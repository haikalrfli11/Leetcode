class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> temp;
        for(int i = 0 ; i < words.size();i++ ) {
            string s = words[i];
            for(int j = 0; j <  words.size(); j++) {
                if(s.find(words[j]) >= 0 && s.find(words[j]) <= s.length()-1 && s != words[j] && count(temp.begin(),temp.end(),words[j]) == 0) {
                    temp.push_back(words[j]);
                }
            }
        }
        return temp;
    }
};