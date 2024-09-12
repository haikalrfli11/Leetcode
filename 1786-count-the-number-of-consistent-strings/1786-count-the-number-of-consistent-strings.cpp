class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         vector<string> check;
  for(int i = 0; i < words.size(); i++) {
    bool temp = true;
    string str = words[i];
    for(int j = 0; j < words[i].size();j++ ){
       if(allowed.find(str[j]) > allowed.size()) {
        temp = false;
    }
  }

     if(temp) {
      check.push_back(str);
    }
  }

    return check.size();
    }
};