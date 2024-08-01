class Solution {
public:
    int countSeniors(vector<string>& details) {
         int total = 0;
    for(int i = 0; i < details.size(); i++) {
        string s = details[i];
        int x = stoi(s.substr(11,2));
        if(x > 60) total++;
    }

    return total;
    }
};