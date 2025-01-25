class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
         int limit = candyType.size() / 2;
      int type = 1;
     sort(candyType.begin(),candyType.end());
      for(int i = 0; i < candyType.size()-1; i++) {
         if(candyType[i] != candyType[i+1]) {
            type++;
         }
      }
    return min(type,limit);
    }
};