class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
         int odd = 0;
     int even = 0;
      int target = 0;
     bool isOdd = false;
     bool isEven = false;
     int cost = 0;
     for(int i = 0; i < position.size(); i++) {
      if(position[i] % 2 == 0 )even++;
      else odd++;
     }
    if(odd > even)isOdd = true;
    else isEven = true;

   for(int i = 0 ;i < position.size(); i++) {
      if(isOdd && position[i] % 2 == 1) {
         target = position[i];
         break;
      }else if(isEven && position[i]  % 2 == 0 ){
         target = position[i];
         break;
      }
   }
   for(int i = 0; i < position.size(); i++) {
      if(position[i] != target) {
         cost += abs(position[i] - target) % 2;
      }
   }
    return cost;
    }
};