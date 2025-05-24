class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> temp;
        for(int i = 0; i < words.size(); i++) {
            bool check = false;
            string word = words[i];
            for(int j = 0; j < word.size(); j++) {
                    if(word[j] == x) {
                        check = true;
                    }
            }
            if(check) {
                temp.push_back(i);
            }
      }
      return temp;
    }
};