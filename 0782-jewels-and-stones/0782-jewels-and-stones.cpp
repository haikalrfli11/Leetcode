class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
         int temp = 0;
    for(int i = 0; i < stones.length(); i++) {
        if(jewels.find(stones[i]) >= 0 && jewels.find(stones[i]) < jewels.length()) temp++;
    }
    return temp;
    }
};